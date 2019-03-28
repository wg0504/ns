using Uno;
using Uno.Compiler.ExportTargetInterop;
using Uno.Platform2;
using Fuse.Platform;
using Fuse;

[ForeignInclude(Language.Java, "android.app.Activity", "android.view.View", 
				"android.view.Window", "android.os.Build", "android.view.Window")]

internal static extern(android) class StatusBarHackHelper
{
	[Foreign(Language.Java)]
	static public void Light(bool isEnabled)
	@{
		com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { 
		public void run()
		{
			// Marshmallow and above
			if (android.os.Build.VERSION.SDK_INT >= 23)
			{
				View view = com.fuse.Activity.getRootActivity().getWindow().getDecorView();
				android.view.Window window = com.fuse.Activity.getRootActivity().getWindow();
				view.setSystemUiVisibility(View.SYSTEM_UI_FLAG_LIGHT_STATUS_BAR);
				window.setStatusBarColor(0x00000000);
			}
		}});
	@}

}

public class AndroidStatusBarHack: Behavior
{
	bool _isLight = false;
	public bool IsLight
	{
		get { return _isLight; }
		set
		{
			_isLight = value;
			if defined(Android)
				StatusBarHackHelper.Light(value);
		}
	}	
}