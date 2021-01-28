FROM cortex/matlab as cortex
FROM mcr2020a-python:3.7

WORKDIR /usr/src

COPY --from=cortex /usr/src .
RUN pip install --no-cache-dir -r requirements.txt

COPY diagnostics diagnostics/

CMD [ "python", "-u", "__init__.py" ]
