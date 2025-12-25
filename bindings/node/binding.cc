#include <napi.h>

typedef struct TSLanguage TSLanguage;

extern "C" TSLanguage *tree_sitter_lx();

// "tree-sitter", "language" hashed with BLAKE2
const napi_type_tag LANGUAGE_TYPE_TAG = {
  0x8AF2E5212AD58ABF, 0xD5006CAD83ABBA16
};

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    Napi::Object obj = Napi::Object::New(env);
    obj["name"] = Napi::String::New(env, "lx");
    auto language = Napi::External<TSLanguage>::New(env, tree_sitter_lx());
    language.TypeTag(&LANGUAGE_TYPE_TAG);
    obj["language"] = language;
    return obj;
}

NODE_API_MODULE(tree_sitter_lx_binding, Init)
