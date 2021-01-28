#include <napi.h>

#include "src/diagnose.h"
#include "src/diagnosis.h"
#include "src/imaging.h"
#include "src/metadata.h"

Napi::Value Diagnose(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    if (info.Length() != 1)
    {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    if (!info[0].IsObject())
    {
        Napi::TypeError::New(env, "Wrong arguments").ThrowAsJavaScriptException();
        return env.Null();
    }

    Napi::Object imagingObject = info[0].ToObject();

    Metadata metadata = {
        imagingObject.Get("metadata").ToObject().Get("age").As<Napi::Number>(),
        imagingObject.Get("metadata").ToObject().Get("sex").As<Napi::String>()};
    Imaging imaging = {
        imagingObject.Get("_id").As<Napi::String>(),
        imagingObject.Get("type").As<Napi::String>(),
        imagingObject.Get("bodyPart").As<Napi::String>(),
        metadata,
        imagingObject.Get("path").As<Napi::String>()};

    Diagnosis diagnosis = diagnose(imaging);
    Napi::Object diagnosisObject = Napi::Object::New(env);

    diagnosisObject.Set(Napi::String::New(env, "imagingId"), diagnosis.imagingId);
    diagnosisObject.Set(Napi::String::New(env, "imagingType"), diagnosis.imagingType);
    diagnosisObject.Set(Napi::String::New(env, "diagnosis"), diagnosis.diagnosis);

    return diagnosisObject;
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(
        Napi::String::New(env, "diagnose"), Napi::Function::New(env, Diagnose));

    return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)
