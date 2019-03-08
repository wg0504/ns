#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Targets/Android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" .
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.ns"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.ns"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "NS.apk" \
    --package=com.apps.ns \
    --activity=NS \
    --sym-dir="app/src/main/.uno" \
    "$@"
