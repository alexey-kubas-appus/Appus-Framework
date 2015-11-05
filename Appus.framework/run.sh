chmod 755 $PROJECT_DIR/Libraries/Appus.framework/PBCrypt
SETTINGSPLIST=$PROJECT_DIR/resources/settings.plist
OUTDIR=$TARGET_BUILD_DIR/$CONTENTS_FOLDER_PATH
ENC_KEY=$(/usr/libexec/PlistBuddy -c "Print CFBundleIdentifier" "$INFOPLIST_FILE")
"$PROJECT_DIR/Libraries/Appus.framework/PBCrypt" -e -k "$ENC_KEY" -i "$SETTINGSPLIST" -o "$OUTDIR/`basename $SETTINGSPLIST`"