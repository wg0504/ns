// This file was generated based on /Users/yeom/Documents/NS/src/Android/AndroidImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.BackgroundDownlo-803edea9.h>
#include <jni.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Action3-3.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Delegate.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.ULong.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace BackgroundDownload{

// internal static extern class BackgroundDownload :16
// {
static void BackgroundDownload_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::ULong_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::ULong_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::ULong_typeof(), ::g::Uno::ULong_typeof(), ::g::Uno::ULong_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[3/*Uno.Action<ulong, string>*/], (uintptr_t)&BackgroundDownload::OnFailed1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Action<ulong>*/], (uintptr_t)&BackgroundDownload::OnPaused1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<ulong, ulong, ulong>*/], (uintptr_t)&BackgroundDownload::OnProgress1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<ulong, string>*/], (uintptr_t)&BackgroundDownload::OnSucceeded1_, uFieldFlagsStatic);
}

uClassType* BackgroundDownload_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.BackgroundDownload.BackgroundDownload", options);
    type->fp_build_ = BackgroundDownload_build;
    return type;
}

// internal static void Initialize() :25
void BackgroundDownload__Initialize_fn()
{
    BackgroundDownload::Initialize();
}

// private static void InitInner(Uno.Action<int, int, int> onProgress, Uno.Action<int, string> onSucceeded, Uno.Action<int, string> onFailed, Uno.Action<int> onPaused) :34
void BackgroundDownload__InitInner_fn(uDelegate* onProgress, uDelegate* onSucceeded, uDelegate* onFailed, uDelegate* onPaused)
{
    BackgroundDownload::InitInner(onProgress, onSucceeded, onFailed, onPaused);
}

// public static generated void add_OnFailed(Uno.Action<ulong, string> value) :22
void BackgroundDownload__add_OnFailed_fn(uDelegate* value)
{
    BackgroundDownload::add_OnFailed(value);
}

// public static generated void remove_OnFailed(Uno.Action<ulong, string> value) :22
void BackgroundDownload__remove_OnFailed_fn(uDelegate* value)
{
    BackgroundDownload::remove_OnFailed(value);
}

// public static generated void add_OnPaused(Uno.Action<ulong> value) :20
void BackgroundDownload__add_OnPaused_fn(uDelegate* value)
{
    BackgroundDownload::add_OnPaused(value);
}

// public static generated void remove_OnPaused(Uno.Action<ulong> value) :20
void BackgroundDownload__remove_OnPaused_fn(uDelegate* value)
{
    BackgroundDownload::remove_OnPaused(value);
}

// public static generated void add_OnProgress(Uno.Action<ulong, ulong, ulong> value) :19
void BackgroundDownload__add_OnProgress_fn(uDelegate* value)
{
    BackgroundDownload::add_OnProgress(value);
}

// public static generated void remove_OnProgress(Uno.Action<ulong, ulong, ulong> value) :19
void BackgroundDownload__remove_OnProgress_fn(uDelegate* value)
{
    BackgroundDownload::remove_OnProgress(value);
}

// public static generated void add_OnSucceeded(Uno.Action<ulong, string> value) :21
void BackgroundDownload__add_OnSucceeded_fn(uDelegate* value)
{
    BackgroundDownload::add_OnSucceeded(value);
}

// public static generated void remove_OnSucceeded(Uno.Action<ulong, string> value) :21
void BackgroundDownload__remove_OnSucceeded_fn(uDelegate* value)
{
    BackgroundDownload::remove_OnSucceeded(value);
}

// internal static void PauseDownload(ulong downloadID) :64
void BackgroundDownload__PauseDownload_fn(uint64_t* downloadID)
{
    BackgroundDownload::PauseDownload(*downloadID);
}

// private static void PauseDownloadInner(int downloadID) :70
void BackgroundDownload__PauseDownloadInner_fn(int32_t* downloadID)
{
    BackgroundDownload::PauseDownloadInner(*downloadID);
}

// private static void RecieveDownloadPaused(int taskIdentifier) :89
void BackgroundDownload__RecieveDownloadPaused_fn(int32_t* taskIdentifier)
{
    BackgroundDownload::RecieveDownloadPaused(*taskIdentifier);
}

// private static void RecieveErroredCompletion(int taskIdentifier, string errorMessage) :113
void BackgroundDownload__RecieveErroredCompletion_fn(int32_t* taskIdentifier, uString* errorMessage)
{
    BackgroundDownload::RecieveErroredCompletion(*taskIdentifier, errorMessage);
}

// private static void RecieveProgress(int taskIdentifier, int totalBytesWritten, int totalBytesExpectedToWrite) :97
void BackgroundDownload__RecieveProgress_fn(int32_t* taskIdentifier, int32_t* totalBytesWritten, int32_t* totalBytesExpectedToWrite)
{
    BackgroundDownload::RecieveProgress(*taskIdentifier, *totalBytesWritten, *totalBytesExpectedToWrite);
}

// private static void RecieveSuccessfulCompletion(int taskIdentifier, string finalPath) :105
void BackgroundDownload__RecieveSuccessfulCompletion_fn(int32_t* taskIdentifier, uString* finalPath)
{
    BackgroundDownload::RecieveSuccessfulCompletion(*taskIdentifier, finalPath);
}

// internal static ulong ResumeDownload(ulong downloadID) :75
void BackgroundDownload__ResumeDownload_fn(uint64_t* downloadID, uint64_t* __retval)
{
    *__retval = BackgroundDownload::ResumeDownload(*downloadID);
}

// private static int ResumeDownloadInner(int downloadID) :81
void BackgroundDownload__ResumeDownloadInner_fn(int32_t* downloadID, int32_t* __retval)
{
    *__retval = BackgroundDownload::ResumeDownloadInner(*downloadID);
}

// internal static ulong StartDownload(string urlStr) :42
void BackgroundDownload__StartDownload_fn(uString* urlStr, uint64_t* __retval)
{
    *__retval = BackgroundDownload::StartDownload(urlStr);
}

// private static int StartDownloadInner(string urlStr) :48
void BackgroundDownload__StartDownloadInner_fn(uString* urlStr, int32_t* __retval)
{
    *__retval = BackgroundDownload::StartDownloadInner(urlStr);
}

// internal static void StopDownload(ulong downloadID) :53
void BackgroundDownload__StopDownload_fn(uint64_t* downloadID)
{
    BackgroundDownload::StopDownload(*downloadID);
}

// private static void StopDownloadInner(int downloadID) :59
void BackgroundDownload__StopDownloadInner_fn(int32_t* downloadID)
{
    BackgroundDownload::StopDownloadInner(*downloadID);
}

uSStrong<uDelegate*> BackgroundDownload::OnFailed1_;
uSStrong<uDelegate*> BackgroundDownload::OnPaused1_;
uSStrong<uDelegate*> BackgroundDownload::OnProgress1_;
uSStrong<uDelegate*> BackgroundDownload::OnSucceeded1_;

// internal static void Initialize() [static] :25
void BackgroundDownload::Initialize()
{
    BackgroundDownload::InitInner(uDelegate::New(::TYPES[0/*Uno.Action<int, int, int>*/], (void*)BackgroundDownload__RecieveProgress_fn), uDelegate::New(::TYPES[1/*Uno.Action<int, string>*/], (void*)BackgroundDownload__RecieveSuccessfulCompletion_fn), uDelegate::New(::TYPES[1/*Uno.Action<int, string>*/], (void*)BackgroundDownload__RecieveErroredCompletion_fn), uDelegate::New(::TYPES[2/*Uno.Action<int>*/], (void*)BackgroundDownload__RecieveDownloadPaused_fn));
}

// private static void InitInner(Uno.Action<int, int, int> onProgress, Uno.Action<int, string> onSucceeded, Uno.Action<int, string> onFailed, Uno.Action<int> onPaused) [static] :34
void BackgroundDownload::InitInner(uDelegate* onProgress, uDelegate* onSucceeded, uDelegate* onFailed, uDelegate* onPaused)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InitInner372", "(Lcom/foreign/Uno/Action_int_int_int;Lcom/foreign/Uno/Action_int_String;Lcom/foreign/Uno/Action_int_String;Lcom/foreign/Uno/Action_int;)V");
        uDelegate* _uonProgress=onProgress;
        jobject _onProgress = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonProgress, "com.foreign.Uno.Action_int_int_int");
        uDelegate* _uonSucceeded=onSucceeded;
        jobject _onSucceeded = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonSucceeded, "com.foreign.Uno.Action_int_String");
        uDelegate* _uonFailed=onFailed;
        jobject _onFailed = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonFailed, "com.foreign.Uno.Action_int_String");
        uDelegate* _uonPaused=onPaused;
        jobject _onPaused = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonPaused, "com.foreign.Uno.Action_int");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_onProgress,_onSucceeded,_onFailed,_onPaused);
        
        if (_onProgress!=NULL) { U_JNIVAR->DeleteLocalRef(_onProgress); }
        if (_onSucceeded!=NULL) { U_JNIVAR->DeleteLocalRef(_onSucceeded); }
        if (_onFailed!=NULL) { U_JNIVAR->DeleteLocalRef(_onFailed); }
        if (_onPaused!=NULL) { U_JNIVAR->DeleteLocalRef(_onPaused); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void PauseDownload(ulong downloadID) [static] :64
void BackgroundDownload::PauseDownload(uint64_t downloadID)
{
    BackgroundDownload::PauseDownloadInner((int32_t)downloadID);
}

// private static void PauseDownloadInner(int downloadID) [static] :70
void BackgroundDownload::PauseDownloadInner(int32_t downloadID)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "PauseDownloadInner373", "(I)V");
        int32_t _udownloadID=downloadID;
        jint _downloadID = (jint)_udownloadID;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_downloadID);
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void RecieveDownloadPaused(int taskIdentifier) [static] :89
void BackgroundDownload::RecieveDownloadPaused(int32_t taskIdentifier)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "RecieveDownloadPaused(int)");
    uDelegate* handler = BackgroundDownload::OnPaused1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<uint64_t>((uint64_t)taskIdentifier));
}

// private static void RecieveErroredCompletion(int taskIdentifier, string errorMessage) [static] :113
void BackgroundDownload::RecieveErroredCompletion(int32_t taskIdentifier, uString* errorMessage)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "RecieveErroredCompletion(int,string)");
    uDelegate* handler = BackgroundDownload::OnFailed1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, uCRef<uint64_t>((uint64_t)taskIdentifier), errorMessage);
}

// private static void RecieveProgress(int taskIdentifier, int totalBytesWritten, int totalBytesExpectedToWrite) [static] :97
void BackgroundDownload::RecieveProgress(int32_t taskIdentifier, int32_t totalBytesWritten, int32_t totalBytesExpectedToWrite)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "RecieveProgress(int,int,int)");
    uDelegate* handler = BackgroundDownload::OnProgress1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(3, uCRef<uint64_t>((uint64_t)taskIdentifier), uCRef<uint64_t>((uint64_t)totalBytesWritten), uCRef<uint64_t>((uint64_t)totalBytesExpectedToWrite));
}

// private static void RecieveSuccessfulCompletion(int taskIdentifier, string finalPath) [static] :105
void BackgroundDownload::RecieveSuccessfulCompletion(int32_t taskIdentifier, uString* finalPath)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "RecieveSuccessfulCompletion(int,string)");
    uDelegate* handler = BackgroundDownload::OnSucceeded1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, uCRef<uint64_t>((uint64_t)taskIdentifier), finalPath);
}

// internal static ulong ResumeDownload(ulong downloadID) [static] :75
uint64_t BackgroundDownload::ResumeDownload(uint64_t downloadID)
{
    return (uint64_t)BackgroundDownload::ResumeDownloadInner((int32_t)downloadID);
}

// private static int ResumeDownloadInner(int downloadID) [static] :81
int32_t BackgroundDownload::ResumeDownloadInner(int32_t downloadID)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ResumeDownloadInner374", "(I)I");
        int32_t _udownloadID=downloadID;
        jint _downloadID = (jint)_udownloadID;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_downloadID);
        int32_t __result = (int32_t)__jresult;
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static ulong StartDownload(string urlStr) [static] :42
uint64_t BackgroundDownload::StartDownload(uString* urlStr)
{
    return (uint64_t)BackgroundDownload::StartDownloadInner(urlStr);
}

// private static int StartDownloadInner(string urlStr) [static] :48
int32_t BackgroundDownload::StartDownloadInner(uString* urlStr)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "StartDownloadInner375", "(Ljava/lang/String;)I");
        uString* _uurlStr=urlStr;
        jstring _urlStr = JniHelper::UnoToJavaString(_uurlStr);
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_urlStr);
        int32_t __result = (int32_t)__jresult;
        if (_urlStr!=NULL) { U_JNIVAR->DeleteLocalRef(_urlStr); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static void StopDownload(ulong downloadID) [static] :53
void BackgroundDownload::StopDownload(uint64_t downloadID)
{
    BackgroundDownload::StopDownloadInner((int32_t)downloadID);
}

// private static void StopDownloadInner(int downloadID) [static] :59
void BackgroundDownload::StopDownloadInner(int32_t downloadID)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "StopDownloadInner376", "(I)V");
        int32_t _udownloadID=downloadID;
        jint _downloadID = (jint)_udownloadID;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_downloadID);
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static generated void add_OnFailed(Uno.Action<ulong, string> value) [static] :22
void BackgroundDownload::add_OnFailed(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "add_OnFailed(Uno.Action<ulong, string>)");
    BackgroundDownload::OnFailed1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BackgroundDownload::OnFailed1_, value), ::TYPES[3/*Uno.Action<ulong, string>*/]);
}

// public static generated void remove_OnFailed(Uno.Action<ulong, string> value) [static] :22
void BackgroundDownload::remove_OnFailed(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "remove_OnFailed(Uno.Action<ulong, string>)");
    BackgroundDownload::OnFailed1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BackgroundDownload::OnFailed1_, value), ::TYPES[3/*Uno.Action<ulong, string>*/]);
}

// public static generated void add_OnPaused(Uno.Action<ulong> value) [static] :20
void BackgroundDownload::add_OnPaused(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "add_OnPaused(Uno.Action<ulong>)");
    BackgroundDownload::OnPaused1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BackgroundDownload::OnPaused1_, value), ::TYPES[4/*Uno.Action<ulong>*/]);
}

// public static generated void remove_OnPaused(Uno.Action<ulong> value) [static] :20
void BackgroundDownload::remove_OnPaused(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "remove_OnPaused(Uno.Action<ulong>)");
    BackgroundDownload::OnPaused1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BackgroundDownload::OnPaused1_, value), ::TYPES[4/*Uno.Action<ulong>*/]);
}

// public static generated void add_OnProgress(Uno.Action<ulong, ulong, ulong> value) [static] :19
void BackgroundDownload::add_OnProgress(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "add_OnProgress(Uno.Action<ulong, ulong, ulong>)");
    BackgroundDownload::OnProgress1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BackgroundDownload::OnProgress1_, value), ::TYPES[5/*Uno.Action<ulong, ulong, ulong>*/]);
}

// public static generated void remove_OnProgress(Uno.Action<ulong, ulong, ulong> value) [static] :19
void BackgroundDownload::remove_OnProgress(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "remove_OnProgress(Uno.Action<ulong, ulong, ulong>)");
    BackgroundDownload::OnProgress1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BackgroundDownload::OnProgress1_, value), ::TYPES[5/*Uno.Action<ulong, ulong, ulong>*/]);
}

// public static generated void add_OnSucceeded(Uno.Action<ulong, string> value) [static] :21
void BackgroundDownload::add_OnSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "add_OnSucceeded(Uno.Action<ulong, string>)");
    BackgroundDownload::OnSucceeded1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BackgroundDownload::OnSucceeded1_, value), ::TYPES[3/*Uno.Action<ulong, string>*/]);
}

// public static generated void remove_OnSucceeded(Uno.Action<ulong, string> value) [static] :21
void BackgroundDownload::remove_OnSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.BackgroundDownload.BackgroundDownload", "remove_OnSucceeded(Uno.Action<ulong, string>)");
    BackgroundDownload::OnSucceeded1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BackgroundDownload::OnSucceeded1_, value), ::TYPES[3/*Uno.Action<ulong, string>*/]);
}
// }

}}} // ::g::Fuse::BackgroundDownload
