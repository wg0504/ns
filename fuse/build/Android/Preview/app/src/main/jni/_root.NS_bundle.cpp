// This file was generated based on /Users/yeom/Documents/NS/NS.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.NS_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class NS_bundle :0
// {
// static NS_bundle() :0
static void NS_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    NS_bundle::MainViewe639d9d7_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"NS"*/]))->GetFile(::STRINGS[1/*"mainview-cb...*/]);
}

static void NS_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("NS");
    ::STRINGS[1] = uString::Const("mainview-cb8c4a65.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&NS_bundle::MainViewe639d9d7_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MainViewe639d9d7", 0));
}

uClassType* NS_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("NS_bundle", options);
    type->fp_build_ = NS_bundle_build;
    type->fp_cctor_ = NS_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> NS_bundle::MainViewe639d9d7_;
// }

} // ::g
