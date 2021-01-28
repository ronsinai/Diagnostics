FROM node:14-alpine as build
WORKDIR /usr/src
COPY . .
RUN apk update && \
    apk add --no-cache --virtual .build-deps make gcc g++ python && \
    npm i --global node-gyp && \
    npm ci --production && \
    node-gyp configure && \ 
    node-gyp rebuild && \
    rm -rf diagnostics && \
    mkdir diagnostics && \
    cp index.js diagnostics/ && \
    cp -r build diagnostics/ && \
    apk del .build-deps

FROM cortex/c
WORKDIR /usr/src
COPY --from=build /usr/src/diagnostics diagnostics/

CMD [ "node", "index.js" ]
