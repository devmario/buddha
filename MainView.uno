using Uno;
using Uno.IO;
using Fuse;
using Fuse.Scripting;
using Fuse.Reactive;
using Experimental.Audio;
using Uno.Collections;

public partial class MainView  {
 	public static Dictionary<string, Uno.BundleFile> bundleDict = new Dictionary<string, Uno.BundleFile>();
	public static Dictionary<string, Player> playerDict = new Dictionary<string, Player>();

	public static Dictionary<string, Sound> soundDict = new Dictionary<string, Sound>();
	public static Dictionary<string, Channel> channelDict = new Dictionary<string, Channel>();

	public static Dictionary<string, float> volumeDict = new Dictionary<string, float>();
	
	void AddPlayer(string key) {
		MainView.playerDict.Add(key, new Player());
		MainView.volumeDict.Add(key, 1.0f);
	}
	
	public static void disposePlayer(string key) {
	    Channel channel;
		if(MainView.channelDict.TryGetValue(key, out channel)) {
			MainView.channelDict.Remove(key);
			channel.Dispose();
		}
	}

	public static Channel getChannel(string key) {
	    Channel channel;
		if(MainView.channelDict.TryGetValue(key, out channel)) {
			return channel;
		}
		return null;
	}

	public static void changeVolumne(string key, float volume) {
		MainView.volumeDict[key] = volume;
		var channel = MainView.getChannel(key);
		if(channel != null) {
			channel.Volume = MainView.volumeDict[key];
		}
	}
	
	public static void play(string bundleKey, string playerKey, bool loop) {
		disposePlayer(playerKey);
		
		var player = MainView.playerDict[playerKey];
		Sound snd;
		if(!MainView.soundDict.TryGetValue(playerKey + "_" + bundleKey, out snd)) {
			var bundle = MainView.bundleDict[bundleKey];

			snd = player.CreateSound(bundle);
			MainView.soundDict.Add(playerKey + "_" +  bundleKey, snd);
		}

		var channel = player.PlaySound(snd, loop);
		channel.Volume = MainView.volumeDict[playerKey];
		MainView.channelDict.Add(playerKey, channel);
	}
	
    public MainView() {
		InitializeUX();
		
		AddPlayer("bg");
		AddPlayer("voice");
		AddPlayer("effect");
		
		bundleDict.Add("res/snd/a001.mp3", import global::Uno.BundleFile("res/snd/a001.mp3"));
		bundleDict.Add("res/snd/a002.mp3", import global::Uno.BundleFile("res/snd/a002.mp3"));
		bundleDict.Add("res/snd/a003.mp3", import global::Uno.BundleFile("res/snd/a003.mp3"));
		bundleDict.Add("res/snd/a004.mp3", import global::Uno.BundleFile("res/snd/a004.mp3"));
		bundleDict.Add("res/snd/a005.mp3", import global::Uno.BundleFile("res/snd/a005.mp3"));
		bundleDict.Add("res/snd/a006.mp3", import global::Uno.BundleFile("res/snd/a006.mp3"));
		bundleDict.Add("res/snd/a007.mp3", import global::Uno.BundleFile("res/snd/a007.mp3"));
		bundleDict.Add("res/snd/a008.mp3", import global::Uno.BundleFile("res/snd/a008.mp3"));
		bundleDict.Add("res/snd/a009.mp3", import global::Uno.BundleFile("res/snd/a009.mp3"));
		bundleDict.Add("res/snd/a010.mp3", import global::Uno.BundleFile("res/snd/a010.mp3"));
		bundleDict.Add("res/snd/a011.mp3", import global::Uno.BundleFile("res/snd/a011.mp3"));
		bundleDict.Add("res/snd/a012.mp3", import global::Uno.BundleFile("res/snd/a012.mp3"));
		bundleDict.Add("res/snd/a013.mp3", import global::Uno.BundleFile("res/snd/a013.mp3"));
		bundleDict.Add("res/snd/a014.mp3", import global::Uno.BundleFile("res/snd/a014.mp3"));
		bundleDict.Add("res/snd/a015.mp3", import global::Uno.BundleFile("res/snd/a015.mp3"));
		bundleDict.Add("res/snd/a016.mp3", import global::Uno.BundleFile("res/snd/a016.mp3"));
		bundleDict.Add("res/snd/a017.mp3", import global::Uno.BundleFile("res/snd/a017.mp3"));
		bundleDict.Add("res/snd/a018.mp3", import global::Uno.BundleFile("res/snd/a018.mp3"));
		bundleDict.Add("res/snd/a019.mp3", import global::Uno.BundleFile("res/snd/a019.mp3"));
		bundleDict.Add("res/snd/a020.mp3", import global::Uno.BundleFile("res/snd/a020.mp3"));
		bundleDict.Add("res/snd/a021.mp3", import global::Uno.BundleFile("res/snd/a021.mp3"));
		bundleDict.Add("res/snd/a022.mp3", import global::Uno.BundleFile("res/snd/a022.mp3"));
		bundleDict.Add("res/snd/a023.mp3", import global::Uno.BundleFile("res/snd/a023.mp3"));
		bundleDict.Add("res/snd/a024.mp3", import global::Uno.BundleFile("res/snd/a024.mp3"));
		bundleDict.Add("res/snd/a025.mp3", import global::Uno.BundleFile("res/snd/a025.mp3"));
		bundleDict.Add("res/snd/a026.mp3", import global::Uno.BundleFile("res/snd/a026.mp3"));
		bundleDict.Add("res/snd/a027.mp3", import global::Uno.BundleFile("res/snd/a027.mp3"));
		bundleDict.Add("res/snd/a028.mp3", import global::Uno.BundleFile("res/snd/a028.mp3"));
		bundleDict.Add("res/snd/a029.mp3", import global::Uno.BundleFile("res/snd/a029.mp3"));
		bundleDict.Add("res/snd/a030.mp3", import global::Uno.BundleFile("res/snd/a030.mp3"));
		bundleDict.Add("res/snd/a031.mp3", import global::Uno.BundleFile("res/snd/a031.mp3"));
		bundleDict.Add("res/snd/a032.mp3", import global::Uno.BundleFile("res/snd/a032.mp3"));
		bundleDict.Add("res/snd/a033.mp3", import global::Uno.BundleFile("res/snd/a033.mp3"));
		bundleDict.Add("res/snd/a034.mp3", import global::Uno.BundleFile("res/snd/a034.mp3"));
		bundleDict.Add("res/snd/a035.mp3", import global::Uno.BundleFile("res/snd/a035.mp3"));
		bundleDict.Add("res/snd/a036.mp3", import global::Uno.BundleFile("res/snd/a036.mp3"));
		bundleDict.Add("res/snd/a037.mp3", import global::Uno.BundleFile("res/snd/a037.mp3"));
		bundleDict.Add("res/snd/a038.mp3", import global::Uno.BundleFile("res/snd/a038.mp3"));
		bundleDict.Add("res/snd/a039.mp3", import global::Uno.BundleFile("res/snd/a039.mp3"));
		bundleDict.Add("res/snd/a040.mp3", import global::Uno.BundleFile("res/snd/a040.mp3"));
		bundleDict.Add("res/snd/a041.mp3", import global::Uno.BundleFile("res/snd/a041.mp3"));
		bundleDict.Add("res/snd/a042.mp3", import global::Uno.BundleFile("res/snd/a042.mp3"));
		bundleDict.Add("res/snd/a043.mp3", import global::Uno.BundleFile("res/snd/a043.mp3"));
		bundleDict.Add("res/snd/a044.mp3", import global::Uno.BundleFile("res/snd/a044.mp3"));
		bundleDict.Add("res/snd/a045.mp3", import global::Uno.BundleFile("res/snd/a045.mp3"));
		bundleDict.Add("res/snd/a046.mp3", import global::Uno.BundleFile("res/snd/a046.mp3"));
		bundleDict.Add("res/snd/a047.mp3", import global::Uno.BundleFile("res/snd/a047.mp3"));
		bundleDict.Add("res/snd/a048.mp3", import global::Uno.BundleFile("res/snd/a048.mp3"));
		bundleDict.Add("res/snd/a049.mp3", import global::Uno.BundleFile("res/snd/a049.mp3"));
		bundleDict.Add("res/snd/a050.mp3", import global::Uno.BundleFile("res/snd/a050.mp3"));
		bundleDict.Add("res/snd/a051.mp3", import global::Uno.BundleFile("res/snd/a051.mp3"));
		bundleDict.Add("res/snd/a052.mp3", import global::Uno.BundleFile("res/snd/a052.mp3"));
		bundleDict.Add("res/snd/a053.mp3", import global::Uno.BundleFile("res/snd/a053.mp3"));
		bundleDict.Add("res/snd/a054.mp3", import global::Uno.BundleFile("res/snd/a054.mp3"));
		bundleDict.Add("res/snd/a055.mp3", import global::Uno.BundleFile("res/snd/a055.mp3"));
		bundleDict.Add("res/snd/a056.mp3", import global::Uno.BundleFile("res/snd/a056.mp3"));
		bundleDict.Add("res/snd/a057.mp3", import global::Uno.BundleFile("res/snd/a057.mp3"));
		bundleDict.Add("res/snd/a058.mp3", import global::Uno.BundleFile("res/snd/a058.mp3"));
		bundleDict.Add("res/snd/a059.mp3", import global::Uno.BundleFile("res/snd/a059.mp3"));
		bundleDict.Add("res/snd/a060.mp3", import global::Uno.BundleFile("res/snd/a060.mp3"));
		bundleDict.Add("res/snd/a061.mp3", import global::Uno.BundleFile("res/snd/a061.mp3"));
		bundleDict.Add("res/snd/a062.mp3", import global::Uno.BundleFile("res/snd/a062.mp3"));
		bundleDict.Add("res/snd/a063.mp3", import global::Uno.BundleFile("res/snd/a063.mp3"));
		bundleDict.Add("res/snd/a064.mp3", import global::Uno.BundleFile("res/snd/a064.mp3"));
		bundleDict.Add("res/snd/a065.mp3", import global::Uno.BundleFile("res/snd/a065.mp3"));
		bundleDict.Add("res/snd/a066.mp3", import global::Uno.BundleFile("res/snd/a066.mp3"));
		bundleDict.Add("res/snd/a067.mp3", import global::Uno.BundleFile("res/snd/a067.mp3"));
		bundleDict.Add("res/snd/a068.mp3", import global::Uno.BundleFile("res/snd/a068.mp3"));
		bundleDict.Add("res/snd/a069.mp3", import global::Uno.BundleFile("res/snd/a069.mp3"));
		bundleDict.Add("res/snd/a070.mp3", import global::Uno.BundleFile("res/snd/a070.mp3"));
		bundleDict.Add("res/snd/a071.mp3", import global::Uno.BundleFile("res/snd/a071.mp3"));
		bundleDict.Add("res/snd/a072.mp3", import global::Uno.BundleFile("res/snd/a072.mp3"));
		bundleDict.Add("res/snd/a073.mp3", import global::Uno.BundleFile("res/snd/a073.mp3"));
		bundleDict.Add("res/snd/a074.mp3", import global::Uno.BundleFile("res/snd/a074.mp3"));
		bundleDict.Add("res/snd/a075.mp3", import global::Uno.BundleFile("res/snd/a075.mp3"));
		bundleDict.Add("res/snd/a076.mp3", import global::Uno.BundleFile("res/snd/a076.mp3"));
		bundleDict.Add("res/snd/a077.mp3", import global::Uno.BundleFile("res/snd/a077.mp3"));
		bundleDict.Add("res/snd/a078.mp3", import global::Uno.BundleFile("res/snd/a078.mp3"));
		bundleDict.Add("res/snd/a079.mp3", import global::Uno.BundleFile("res/snd/a079.mp3"));
		bundleDict.Add("res/snd/a080.mp3", import global::Uno.BundleFile("res/snd/a080.mp3"));
		bundleDict.Add("res/snd/a081.mp3", import global::Uno.BundleFile("res/snd/a081.mp3"));
		bundleDict.Add("res/snd/a082.mp3", import global::Uno.BundleFile("res/snd/a082.mp3"));
		bundleDict.Add("res/snd/a083.mp3", import global::Uno.BundleFile("res/snd/a083.mp3"));
		bundleDict.Add("res/snd/a084.mp3", import global::Uno.BundleFile("res/snd/a084.mp3"));
		bundleDict.Add("res/snd/a085.mp3", import global::Uno.BundleFile("res/snd/a085.mp3"));
		bundleDict.Add("res/snd/a086.mp3", import global::Uno.BundleFile("res/snd/a086.mp3"));
		bundleDict.Add("res/snd/a087.mp3", import global::Uno.BundleFile("res/snd/a087.mp3"));
		bundleDict.Add("res/snd/a088.mp3", import global::Uno.BundleFile("res/snd/a088.mp3"));
		bundleDict.Add("res/snd/a089.mp3", import global::Uno.BundleFile("res/snd/a089.mp3"));
		bundleDict.Add("res/snd/a090.mp3", import global::Uno.BundleFile("res/snd/a090.mp3"));
		bundleDict.Add("res/snd/a091.mp3", import global::Uno.BundleFile("res/snd/a091.mp3"));
		bundleDict.Add("res/snd/a092.mp3", import global::Uno.BundleFile("res/snd/a092.mp3"));
		bundleDict.Add("res/snd/a093.mp3", import global::Uno.BundleFile("res/snd/a093.mp3"));
		bundleDict.Add("res/snd/a094.mp3", import global::Uno.BundleFile("res/snd/a094.mp3"));
		bundleDict.Add("res/snd/a095.mp3", import global::Uno.BundleFile("res/snd/a095.mp3"));
		bundleDict.Add("res/snd/a096.mp3", import global::Uno.BundleFile("res/snd/a096.mp3"));
		bundleDict.Add("res/snd/a097.mp3", import global::Uno.BundleFile("res/snd/a097.mp3"));
		bundleDict.Add("res/snd/a098.mp3", import global::Uno.BundleFile("res/snd/a098.mp3"));
		bundleDict.Add("res/snd/a099.mp3", import global::Uno.BundleFile("res/snd/a099.mp3"));
		bundleDict.Add("res/snd/a100.mp3", import global::Uno.BundleFile("res/snd/a100.mp3"));
		bundleDict.Add("res/snd/a101.mp3", import global::Uno.BundleFile("res/snd/a101.mp3"));
		bundleDict.Add("res/snd/a102.mp3", import global::Uno.BundleFile("res/snd/a102.mp3"));
		bundleDict.Add("res/snd/a103.mp3", import global::Uno.BundleFile("res/snd/a103.mp3"));
		bundleDict.Add("res/snd/a104.mp3", import global::Uno.BundleFile("res/snd/a104.mp3"));
		bundleDict.Add("res/snd/a105.mp3", import global::Uno.BundleFile("res/snd/a105.mp3"));
		bundleDict.Add("res/snd/a106.mp3", import global::Uno.BundleFile("res/snd/a106.mp3"));
		bundleDict.Add("res/snd/a107.mp3", import global::Uno.BundleFile("res/snd/a107.mp3"));
		bundleDict.Add("res/snd/a108.mp3", import global::Uno.BundleFile("res/snd/a108.mp3"));
		bundleDict.Add("res/snd/appInfo.mp3", import global::Uno.BundleFile("res/snd/appInfo.mp3"));
		bundleDict.Add("res/snd/b001.mp3", import global::Uno.BundleFile("res/snd/b001.mp3"));
		bundleDict.Add("res/snd/b002.mp3", import global::Uno.BundleFile("res/snd/b002.mp3"));
		bundleDict.Add("res/snd/b003.mp3", import global::Uno.BundleFile("res/snd/b003.mp3"));
		bundleDict.Add("res/snd/b004.mp3", import global::Uno.BundleFile("res/snd/b004.mp3"));
		bundleDict.Add("res/snd/b005.mp3", import global::Uno.BundleFile("res/snd/b005.mp3"));
		bundleDict.Add("res/snd/b006.mp3", import global::Uno.BundleFile("res/snd/b006.mp3"));
		bundleDict.Add("res/snd/b007.mp3", import global::Uno.BundleFile("res/snd/b007.mp3"));
		bundleDict.Add("res/snd/b008.mp3", import global::Uno.BundleFile("res/snd/b008.mp3"));
		bundleDict.Add("res/snd/b009.mp3", import global::Uno.BundleFile("res/snd/b009.mp3"));
		bundleDict.Add("res/snd/b010.mp3", import global::Uno.BundleFile("res/snd/b010.mp3"));
		bundleDict.Add("res/snd/b011.mp3", import global::Uno.BundleFile("res/snd/b011.mp3"));
		bundleDict.Add("res/snd/b012.mp3", import global::Uno.BundleFile("res/snd/b012.mp3"));
		bundleDict.Add("res/snd/b013.mp3", import global::Uno.BundleFile("res/snd/b013.mp3"));
		bundleDict.Add("res/snd/b014.mp3", import global::Uno.BundleFile("res/snd/b014.mp3"));
		bundleDict.Add("res/snd/b015.mp3", import global::Uno.BundleFile("res/snd/b015.mp3"));
		bundleDict.Add("res/snd/b016.mp3", import global::Uno.BundleFile("res/snd/b016.mp3"));
		bundleDict.Add("res/snd/b017.mp3", import global::Uno.BundleFile("res/snd/b017.mp3"));
		bundleDict.Add("res/snd/b018.mp3", import global::Uno.BundleFile("res/snd/b018.mp3"));
		bundleDict.Add("res/snd/b019.mp3", import global::Uno.BundleFile("res/snd/b019.mp3"));
		bundleDict.Add("res/snd/b020.mp3", import global::Uno.BundleFile("res/snd/b020.mp3"));
		bundleDict.Add("res/snd/b021.mp3", import global::Uno.BundleFile("res/snd/b021.mp3"));
		bundleDict.Add("res/snd/b022.mp3", import global::Uno.BundleFile("res/snd/b022.mp3"));
		bundleDict.Add("res/snd/b023.mp3", import global::Uno.BundleFile("res/snd/b023.mp3"));
		bundleDict.Add("res/snd/b024.mp3", import global::Uno.BundleFile("res/snd/b024.mp3"));
		bundleDict.Add("res/snd/b025.mp3", import global::Uno.BundleFile("res/snd/b025.mp3"));
		bundleDict.Add("res/snd/b026.mp3", import global::Uno.BundleFile("res/snd/b026.mp3"));
		bundleDict.Add("res/snd/b027.mp3", import global::Uno.BundleFile("res/snd/b027.mp3"));
		bundleDict.Add("res/snd/b028.mp3", import global::Uno.BundleFile("res/snd/b028.mp3"));
		bundleDict.Add("res/snd/b029.mp3", import global::Uno.BundleFile("res/snd/b029.mp3"));
		bundleDict.Add("res/snd/b030.mp3", import global::Uno.BundleFile("res/snd/b030.mp3"));
		bundleDict.Add("res/snd/b031.mp3", import global::Uno.BundleFile("res/snd/b031.mp3"));
		bundleDict.Add("res/snd/b032.mp3", import global::Uno.BundleFile("res/snd/b032.mp3"));
		bundleDict.Add("res/snd/b033.mp3", import global::Uno.BundleFile("res/snd/b033.mp3"));
		bundleDict.Add("res/snd/b034.mp3", import global::Uno.BundleFile("res/snd/b034.mp3"));
		bundleDict.Add("res/snd/b035.mp3", import global::Uno.BundleFile("res/snd/b035.mp3"));
		bundleDict.Add("res/snd/b036.mp3", import global::Uno.BundleFile("res/snd/b036.mp3"));
		bundleDict.Add("res/snd/b037.mp3", import global::Uno.BundleFile("res/snd/b037.mp3"));
		bundleDict.Add("res/snd/b038.mp3", import global::Uno.BundleFile("res/snd/b038.mp3"));
		bundleDict.Add("res/snd/b039.mp3", import global::Uno.BundleFile("res/snd/b039.mp3"));
		bundleDict.Add("res/snd/b040.mp3", import global::Uno.BundleFile("res/snd/b040.mp3"));
		bundleDict.Add("res/snd/b041.mp3", import global::Uno.BundleFile("res/snd/b041.mp3"));
		bundleDict.Add("res/snd/b042.mp3", import global::Uno.BundleFile("res/snd/b042.mp3"));
		bundleDict.Add("res/snd/b043.mp3", import global::Uno.BundleFile("res/snd/b043.mp3"));
		bundleDict.Add("res/snd/b044.mp3", import global::Uno.BundleFile("res/snd/b044.mp3"));
		bundleDict.Add("res/snd/b045.mp3", import global::Uno.BundleFile("res/snd/b045.mp3"));
		bundleDict.Add("res/snd/b046.mp3", import global::Uno.BundleFile("res/snd/b046.mp3"));
		bundleDict.Add("res/snd/b047.mp3", import global::Uno.BundleFile("res/snd/b047.mp3"));
		bundleDict.Add("res/snd/b048.mp3", import global::Uno.BundleFile("res/snd/b048.mp3"));
		bundleDict.Add("res/snd/b049.mp3", import global::Uno.BundleFile("res/snd/b049.mp3"));
		bundleDict.Add("res/snd/b050.mp3", import global::Uno.BundleFile("res/snd/b050.mp3"));
		bundleDict.Add("res/snd/b051.mp3", import global::Uno.BundleFile("res/snd/b051.mp3"));
		bundleDict.Add("res/snd/b052.mp3", import global::Uno.BundleFile("res/snd/b052.mp3"));
		bundleDict.Add("res/snd/b053.mp3", import global::Uno.BundleFile("res/snd/b053.mp3"));
		bundleDict.Add("res/snd/b054.mp3", import global::Uno.BundleFile("res/snd/b054.mp3"));
		bundleDict.Add("res/snd/b055.mp3", import global::Uno.BundleFile("res/snd/b055.mp3"));
		bundleDict.Add("res/snd/b056.mp3", import global::Uno.BundleFile("res/snd/b056.mp3"));
		bundleDict.Add("res/snd/b057.mp3", import global::Uno.BundleFile("res/snd/b057.mp3"));
		bundleDict.Add("res/snd/b058.mp3", import global::Uno.BundleFile("res/snd/b058.mp3"));
		bundleDict.Add("res/snd/b059.mp3", import global::Uno.BundleFile("res/snd/b059.mp3"));
		bundleDict.Add("res/snd/b060.mp3", import global::Uno.BundleFile("res/snd/b060.mp3"));
		bundleDict.Add("res/snd/b061.mp3", import global::Uno.BundleFile("res/snd/b061.mp3"));
		bundleDict.Add("res/snd/b062.mp3", import global::Uno.BundleFile("res/snd/b062.mp3"));
		bundleDict.Add("res/snd/b063.mp3", import global::Uno.BundleFile("res/snd/b063.mp3"));
		bundleDict.Add("res/snd/b064.mp3", import global::Uno.BundleFile("res/snd/b064.mp3"));
		bundleDict.Add("res/snd/b065.mp3", import global::Uno.BundleFile("res/snd/b065.mp3"));
		bundleDict.Add("res/snd/b066.mp3", import global::Uno.BundleFile("res/snd/b066.mp3"));
		bundleDict.Add("res/snd/b067.mp3", import global::Uno.BundleFile("res/snd/b067.mp3"));
		bundleDict.Add("res/snd/b068.mp3", import global::Uno.BundleFile("res/snd/b068.mp3"));
		bundleDict.Add("res/snd/b069.mp3", import global::Uno.BundleFile("res/snd/b069.mp3"));
		bundleDict.Add("res/snd/b070.mp3", import global::Uno.BundleFile("res/snd/b070.mp3"));
		bundleDict.Add("res/snd/b071.mp3", import global::Uno.BundleFile("res/snd/b071.mp3"));
		bundleDict.Add("res/snd/b072.mp3", import global::Uno.BundleFile("res/snd/b072.mp3"));
		bundleDict.Add("res/snd/b073.mp3", import global::Uno.BundleFile("res/snd/b073.mp3"));
		bundleDict.Add("res/snd/b074.mp3", import global::Uno.BundleFile("res/snd/b074.mp3"));
		bundleDict.Add("res/snd/b075.mp3", import global::Uno.BundleFile("res/snd/b075.mp3"));
		bundleDict.Add("res/snd/b076.mp3", import global::Uno.BundleFile("res/snd/b076.mp3"));
		bundleDict.Add("res/snd/b077.mp3", import global::Uno.BundleFile("res/snd/b077.mp3"));
		bundleDict.Add("res/snd/b078.mp3", import global::Uno.BundleFile("res/snd/b078.mp3"));
		bundleDict.Add("res/snd/b079.mp3", import global::Uno.BundleFile("res/snd/b079.mp3"));
		bundleDict.Add("res/snd/b080.mp3", import global::Uno.BundleFile("res/snd/b080.mp3"));
		bundleDict.Add("res/snd/b081.mp3", import global::Uno.BundleFile("res/snd/b081.mp3"));
		bundleDict.Add("res/snd/b082.mp3", import global::Uno.BundleFile("res/snd/b082.mp3"));
		bundleDict.Add("res/snd/b083.mp3", import global::Uno.BundleFile("res/snd/b083.mp3"));
		bundleDict.Add("res/snd/b084.mp3", import global::Uno.BundleFile("res/snd/b084.mp3"));
		bundleDict.Add("res/snd/b085.mp3", import global::Uno.BundleFile("res/snd/b085.mp3"));
		bundleDict.Add("res/snd/b086.mp3", import global::Uno.BundleFile("res/snd/b086.mp3"));
		bundleDict.Add("res/snd/b087.mp3", import global::Uno.BundleFile("res/snd/b087.mp3"));
		bundleDict.Add("res/snd/b088.mp3", import global::Uno.BundleFile("res/snd/b088.mp3"));
		bundleDict.Add("res/snd/b089.mp3", import global::Uno.BundleFile("res/snd/b089.mp3"));
		bundleDict.Add("res/snd/b090.mp3", import global::Uno.BundleFile("res/snd/b090.mp3"));
		bundleDict.Add("res/snd/b091.mp3", import global::Uno.BundleFile("res/snd/b091.mp3"));
		bundleDict.Add("res/snd/b092.mp3", import global::Uno.BundleFile("res/snd/b092.mp3"));
		bundleDict.Add("res/snd/b093.mp3", import global::Uno.BundleFile("res/snd/b093.mp3"));
		bundleDict.Add("res/snd/b094.mp3", import global::Uno.BundleFile("res/snd/b094.mp3"));
		bundleDict.Add("res/snd/b095.mp3", import global::Uno.BundleFile("res/snd/b095.mp3"));
		bundleDict.Add("res/snd/b096.mp3", import global::Uno.BundleFile("res/snd/b096.mp3"));
		bundleDict.Add("res/snd/b097.mp3", import global::Uno.BundleFile("res/snd/b097.mp3"));
		bundleDict.Add("res/snd/b098.mp3", import global::Uno.BundleFile("res/snd/b098.mp3"));
		bundleDict.Add("res/snd/b099.mp3", import global::Uno.BundleFile("res/snd/b099.mp3"));
		bundleDict.Add("res/snd/b100.mp3", import global::Uno.BundleFile("res/snd/b100.mp3"));
		bundleDict.Add("res/snd/b101.mp3", import global::Uno.BundleFile("res/snd/b101.mp3"));
		bundleDict.Add("res/snd/b102.mp3", import global::Uno.BundleFile("res/snd/b102.mp3"));
		bundleDict.Add("res/snd/b103.mp3", import global::Uno.BundleFile("res/snd/b103.mp3"));
		bundleDict.Add("res/snd/b104.mp3", import global::Uno.BundleFile("res/snd/b104.mp3"));
		bundleDict.Add("res/snd/b105.mp3", import global::Uno.BundleFile("res/snd/b105.mp3"));
		bundleDict.Add("res/snd/b106.mp3", import global::Uno.BundleFile("res/snd/b106.mp3"));
		bundleDict.Add("res/snd/b107.mp3", import global::Uno.BundleFile("res/snd/b107.mp3"));
		bundleDict.Add("res/snd/b108.mp3", import global::Uno.BundleFile("res/snd/b108.mp3"));
		bundleDict.Add("res/snd/birdBgm.mp3", import global::Uno.BundleFile("res/snd/birdBgm.mp3"));
		bundleDict.Add("res/snd/bugBgm.mp3", import global::Uno.BundleFile("res/snd/bugBgm.mp3"));
		bundleDict.Add("res/snd/g001.mp3", import global::Uno.BundleFile("res/snd/g001.mp3"));
		bundleDict.Add("res/snd/g002.mp3", import global::Uno.BundleFile("res/snd/g002.mp3"));
		bundleDict.Add("res/snd/g003.mp3", import global::Uno.BundleFile("res/snd/g003.mp3"));
		bundleDict.Add("res/snd/g004.mp3", import global::Uno.BundleFile("res/snd/g004.mp3"));
		bundleDict.Add("res/snd/g005.mp3", import global::Uno.BundleFile("res/snd/g005.mp3"));
		bundleDict.Add("res/snd/g006.mp3", import global::Uno.BundleFile("res/snd/g006.mp3"));
		bundleDict.Add("res/snd/g007.mp3", import global::Uno.BundleFile("res/snd/g007.mp3"));
		bundleDict.Add("res/snd/g008.mp3", import global::Uno.BundleFile("res/snd/g008.mp3"));
		bundleDict.Add("res/snd/g009.mp3", import global::Uno.BundleFile("res/snd/g009.mp3"));
		bundleDict.Add("res/snd/g010.mp3", import global::Uno.BundleFile("res/snd/g010.mp3"));
		bundleDict.Add("res/snd/g011.mp3", import global::Uno.BundleFile("res/snd/g011.mp3"));
		bundleDict.Add("res/snd/g012.mp3", import global::Uno.BundleFile("res/snd/g012.mp3"));
		bundleDict.Add("res/snd/g013.mp3", import global::Uno.BundleFile("res/snd/g013.mp3"));
		bundleDict.Add("res/snd/g014.mp3", import global::Uno.BundleFile("res/snd/g014.mp3"));
		bundleDict.Add("res/snd/g015.mp3", import global::Uno.BundleFile("res/snd/g015.mp3"));
		bundleDict.Add("res/snd/g016.mp3", import global::Uno.BundleFile("res/snd/g016.mp3"));
		bundleDict.Add("res/snd/g017.mp3", import global::Uno.BundleFile("res/snd/g017.mp3"));
		bundleDict.Add("res/snd/g018.mp3", import global::Uno.BundleFile("res/snd/g018.mp3"));
		bundleDict.Add("res/snd/g019.mp3", import global::Uno.BundleFile("res/snd/g019.mp3"));
		bundleDict.Add("res/snd/g020.mp3", import global::Uno.BundleFile("res/snd/g020.mp3"));
		bundleDict.Add("res/snd/g021.mp3", import global::Uno.BundleFile("res/snd/g021.mp3"));
		bundleDict.Add("res/snd/g022.mp3", import global::Uno.BundleFile("res/snd/g022.mp3"));
		bundleDict.Add("res/snd/g023.mp3", import global::Uno.BundleFile("res/snd/g023.mp3"));
		bundleDict.Add("res/snd/g024.mp3", import global::Uno.BundleFile("res/snd/g024.mp3"));
		bundleDict.Add("res/snd/g025.mp3", import global::Uno.BundleFile("res/snd/g025.mp3"));
		bundleDict.Add("res/snd/g026.mp3", import global::Uno.BundleFile("res/snd/g026.mp3"));
		bundleDict.Add("res/snd/g027.mp3", import global::Uno.BundleFile("res/snd/g027.mp3"));
		bundleDict.Add("res/snd/g028.mp3", import global::Uno.BundleFile("res/snd/g028.mp3"));
		bundleDict.Add("res/snd/g029.mp3", import global::Uno.BundleFile("res/snd/g029.mp3"));
		bundleDict.Add("res/snd/g030.mp3", import global::Uno.BundleFile("res/snd/g030.mp3"));
		bundleDict.Add("res/snd/g031.mp3", import global::Uno.BundleFile("res/snd/g031.mp3"));
		bundleDict.Add("res/snd/g032.mp3", import global::Uno.BundleFile("res/snd/g032.mp3"));
		bundleDict.Add("res/snd/g033.mp3", import global::Uno.BundleFile("res/snd/g033.mp3"));
		bundleDict.Add("res/snd/g034.mp3", import global::Uno.BundleFile("res/snd/g034.mp3"));
		bundleDict.Add("res/snd/g035.mp3", import global::Uno.BundleFile("res/snd/g035.mp3"));
		bundleDict.Add("res/snd/g036.mp3", import global::Uno.BundleFile("res/snd/g036.mp3"));
		bundleDict.Add("res/snd/g037.mp3", import global::Uno.BundleFile("res/snd/g037.mp3"));
		bundleDict.Add("res/snd/g038.mp3", import global::Uno.BundleFile("res/snd/g038.mp3"));
		bundleDict.Add("res/snd/g039.mp3", import global::Uno.BundleFile("res/snd/g039.mp3"));
		bundleDict.Add("res/snd/g040.mp3", import global::Uno.BundleFile("res/snd/g040.mp3"));
		bundleDict.Add("res/snd/g041.mp3", import global::Uno.BundleFile("res/snd/g041.mp3"));
		bundleDict.Add("res/snd/g042.mp3", import global::Uno.BundleFile("res/snd/g042.mp3"));
		bundleDict.Add("res/snd/g043.mp3", import global::Uno.BundleFile("res/snd/g043.mp3"));
		bundleDict.Add("res/snd/g044.mp3", import global::Uno.BundleFile("res/snd/g044.mp3"));
		bundleDict.Add("res/snd/g045.mp3", import global::Uno.BundleFile("res/snd/g045.mp3"));
		bundleDict.Add("res/snd/g046.mp3", import global::Uno.BundleFile("res/snd/g046.mp3"));
		bundleDict.Add("res/snd/g047.mp3", import global::Uno.BundleFile("res/snd/g047.mp3"));
		bundleDict.Add("res/snd/g048.mp3", import global::Uno.BundleFile("res/snd/g048.mp3"));
		bundleDict.Add("res/snd/g049.mp3", import global::Uno.BundleFile("res/snd/g049.mp3"));
		bundleDict.Add("res/snd/g050.mp3", import global::Uno.BundleFile("res/snd/g050.mp3"));
		bundleDict.Add("res/snd/g051.mp3", import global::Uno.BundleFile("res/snd/g051.mp3"));
		bundleDict.Add("res/snd/g052.mp3", import global::Uno.BundleFile("res/snd/g052.mp3"));
		bundleDict.Add("res/snd/g053.mp3", import global::Uno.BundleFile("res/snd/g053.mp3"));
		bundleDict.Add("res/snd/g054.mp3", import global::Uno.BundleFile("res/snd/g054.mp3"));
		bundleDict.Add("res/snd/g055.mp3", import global::Uno.BundleFile("res/snd/g055.mp3"));
		bundleDict.Add("res/snd/g056.mp3", import global::Uno.BundleFile("res/snd/g056.mp3"));
		bundleDict.Add("res/snd/g057.mp3", import global::Uno.BundleFile("res/snd/g057.mp3"));
		bundleDict.Add("res/snd/g058.mp3", import global::Uno.BundleFile("res/snd/g058.mp3"));
		bundleDict.Add("res/snd/g059.mp3", import global::Uno.BundleFile("res/snd/g059.mp3"));
		bundleDict.Add("res/snd/g060.mp3", import global::Uno.BundleFile("res/snd/g060.mp3"));
		bundleDict.Add("res/snd/g061.mp3", import global::Uno.BundleFile("res/snd/g061.mp3"));
		bundleDict.Add("res/snd/g062.mp3", import global::Uno.BundleFile("res/snd/g062.mp3"));
		bundleDict.Add("res/snd/g063.mp3", import global::Uno.BundleFile("res/snd/g063.mp3"));
		bundleDict.Add("res/snd/g064.mp3", import global::Uno.BundleFile("res/snd/g064.mp3"));
		bundleDict.Add("res/snd/g065.mp3", import global::Uno.BundleFile("res/snd/g065.mp3"));
		bundleDict.Add("res/snd/g066.mp3", import global::Uno.BundleFile("res/snd/g066.mp3"));
		bundleDict.Add("res/snd/g067.mp3", import global::Uno.BundleFile("res/snd/g067.mp3"));
		bundleDict.Add("res/snd/g068.mp3", import global::Uno.BundleFile("res/snd/g068.mp3"));
		bundleDict.Add("res/snd/g069.mp3", import global::Uno.BundleFile("res/snd/g069.mp3"));
		bundleDict.Add("res/snd/g070.mp3", import global::Uno.BundleFile("res/snd/g070.mp3"));
		bundleDict.Add("res/snd/g071.mp3", import global::Uno.BundleFile("res/snd/g071.mp3"));
		bundleDict.Add("res/snd/g072.mp3", import global::Uno.BundleFile("res/snd/g072.mp3"));
		bundleDict.Add("res/snd/g073.mp3", import global::Uno.BundleFile("res/snd/g073.mp3"));
		bundleDict.Add("res/snd/g074.mp3", import global::Uno.BundleFile("res/snd/g074.mp3"));
		bundleDict.Add("res/snd/g075.mp3", import global::Uno.BundleFile("res/snd/g075.mp3"));
		bundleDict.Add("res/snd/g076.mp3", import global::Uno.BundleFile("res/snd/g076.mp3"));
		bundleDict.Add("res/snd/g077.mp3", import global::Uno.BundleFile("res/snd/g077.mp3"));
		bundleDict.Add("res/snd/g078.mp3", import global::Uno.BundleFile("res/snd/g078.mp3"));
		bundleDict.Add("res/snd/g079.mp3", import global::Uno.BundleFile("res/snd/g079.mp3"));
		bundleDict.Add("res/snd/g080.mp3", import global::Uno.BundleFile("res/snd/g080.mp3"));
		bundleDict.Add("res/snd/g081.mp3", import global::Uno.BundleFile("res/snd/g081.mp3"));
		bundleDict.Add("res/snd/g082.mp3", import global::Uno.BundleFile("res/snd/g082.mp3"));
		bundleDict.Add("res/snd/g083.mp3", import global::Uno.BundleFile("res/snd/g083.mp3"));
		bundleDict.Add("res/snd/g084.mp3", import global::Uno.BundleFile("res/snd/g084.mp3"));
		bundleDict.Add("res/snd/g085.mp3", import global::Uno.BundleFile("res/snd/g085.mp3"));
		bundleDict.Add("res/snd/g086.mp3", import global::Uno.BundleFile("res/snd/g086.mp3"));
		bundleDict.Add("res/snd/g087.mp3", import global::Uno.BundleFile("res/snd/g087.mp3"));
		bundleDict.Add("res/snd/g088.mp3", import global::Uno.BundleFile("res/snd/g088.mp3"));
		bundleDict.Add("res/snd/g089.mp3", import global::Uno.BundleFile("res/snd/g089.mp3"));
		bundleDict.Add("res/snd/g090.mp3", import global::Uno.BundleFile("res/snd/g090.mp3"));
		bundleDict.Add("res/snd/g091.mp3", import global::Uno.BundleFile("res/snd/g091.mp3"));
		bundleDict.Add("res/snd/g092.mp3", import global::Uno.BundleFile("res/snd/g092.mp3"));
		bundleDict.Add("res/snd/g093.mp3", import global::Uno.BundleFile("res/snd/g093.mp3"));
		bundleDict.Add("res/snd/g094.mp3", import global::Uno.BundleFile("res/snd/g094.mp3"));
		bundleDict.Add("res/snd/g095.mp3", import global::Uno.BundleFile("res/snd/g095.mp3"));
		bundleDict.Add("res/snd/g096.mp3", import global::Uno.BundleFile("res/snd/g096.mp3"));
		bundleDict.Add("res/snd/g097.mp3", import global::Uno.BundleFile("res/snd/g097.mp3"));
		bundleDict.Add("res/snd/g098.mp3", import global::Uno.BundleFile("res/snd/g098.mp3"));
		bundleDict.Add("res/snd/g099.mp3", import global::Uno.BundleFile("res/snd/g099.mp3"));
		bundleDict.Add("res/snd/g100.mp3", import global::Uno.BundleFile("res/snd/g100.mp3"));
		bundleDict.Add("res/snd/g101.mp3", import global::Uno.BundleFile("res/snd/g101.mp3"));
		bundleDict.Add("res/snd/g102.mp3", import global::Uno.BundleFile("res/snd/g102.mp3"));
		bundleDict.Add("res/snd/g103.mp3", import global::Uno.BundleFile("res/snd/g103.mp3"));
		bundleDict.Add("res/snd/g104.mp3", import global::Uno.BundleFile("res/snd/g104.mp3"));
		bundleDict.Add("res/snd/g105.mp3", import global::Uno.BundleFile("res/snd/g105.mp3"));
		bundleDict.Add("res/snd/g106.mp3", import global::Uno.BundleFile("res/snd/g106.mp3"));
		bundleDict.Add("res/snd/g107.mp3", import global::Uno.BundleFile("res/snd/g107.mp3"));
		bundleDict.Add("res/snd/g108.mp3", import global::Uno.BundleFile("res/snd/g108.mp3"));
		bundleDict.Add("res/snd/how1.mp3", import global::Uno.BundleFile("res/snd/how1.mp3"));
		bundleDict.Add("res/snd/how2.mp3", import global::Uno.BundleFile("res/snd/how2.mp3"));
		bundleDict.Add("res/snd/how3.mp3", import global::Uno.BundleFile("res/snd/how3.mp3"));
		bundleDict.Add("res/snd/how4.mp3", import global::Uno.BundleFile("res/snd/how4.mp3"));
		bundleDict.Add("res/snd/how5.mp3", import global::Uno.BundleFile("res/snd/how5.mp3"));
		bundleDict.Add("res/snd/how6.mp3", import global::Uno.BundleFile("res/snd/how6.mp3"));
		bundleDict.Add("res/snd/how7.mp3", import global::Uno.BundleFile("res/snd/how7.mp3"));
		bundleDict.Add("res/snd/how8.mp3", import global::Uno.BundleFile("res/snd/how8.mp3"));
		bundleDict.Add("res/snd/waterBgm.mp3", import global::Uno.BundleFile("res/snd/waterBgm.mp3"));
		bundleDict.Add("res/snd/bell.mp3", import global::Uno.BundleFile("res/snd/bell.mp3"));
		bundleDict.Add("res/snd/bell0.mp3", import global::Uno.BundleFile("res/snd/bell0.mp3"));
		bundleDict.Add("res/snd/click.mp3", import global::Uno.BundleFile("res/snd/click.mp3"));
		
	}
}


public class AudioModule : NativeModule
{
	public AudioModule()
	{
		AddMember(new NativeFunction("play", (NativeCallback)play));
		AddMember(new NativeFunction("disposePlayer", (NativeCallback)disposePlayer));
		AddMember(new NativeFunction("changeVolume", (NativeCallback)changeVolumne));
	}

	static object changeVolumne(Context c, object[] args) {
		MainView.changeVolumne(args[0].ToString(), float.Parse(args[1].ToString()));
		return null;
	}

	static object disposePlayer(Context c, object[] args) {
		MainView.disposePlayer(args[0].ToString());
		return null;
	}

	static object play(Context c, object[] args)
	{
		MainView.play(args[0].ToString(), args[1].ToString(), args[2].ToString() == "true");
		return null;
	}
}
