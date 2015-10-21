package exight.common;

import java.util.ArrayList;
import java.util.List;

import android.media.MediaPlayer;

import com.threedpaper.app108adult.BgmManager;
import com.threedpaper.app108adult.R;
import com.threedpaper.model.ModelFrame;

import exight.lib.ExightSoundPool;


public class Variables {
	
	public static BgmManager BGM_MANAGER;
	
	public final static int VOICE_TYPE_MAN   	= 0;
	public final static int VOICE_TYPE_WOMAN 	= 1;
	public final static int VOICE_TYPE_WOMAN2 	= 2;
	
	public final static int BG_TYPE_BIRD	 	= 0;
	public final static int BG_TYPE_BUG		 	= 1;
	public final static int BG_TYPE_STREAM	 	= 2;
	public final static int BG_TYPE_MUSIC	 	= 3;
	
	public final static int START_TYPE_CONTINUE = 0;
	public final static int START_TYPE_FIRST   	= 1;
	
	public static final List<ModelFrame> LIST_MODEL_FRAMES = new ArrayList<ModelFrame>();
	public final static void INIT_LIST_MODEL_FRAMES(){
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","나는 이 세상에 하나밖에 없는 \n소중한 사람입니다.",R.drawable.inner_bg_001, R.raw.a001, R.raw.b001, R.raw.g001));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","세상의 모든 존재처럼 \n나도 가치 있는 사람입니다.",R.drawable.inner_bg_002, R.raw.a002, R.raw.b002, R.raw.g002));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","나는 나 자신을 존중하고 \n신뢰하겠습니다.",R.drawable.inner_bg_003, R.raw.a003, R.raw.b003, R.raw.g003));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","내 삶의 주인으로서, \n나는 내 일을 스스로 결정하고 \n해결하겠습니다.",R.drawable.inner_bg_004, R.raw.a004, R.raw.b004, R.raw.g004));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","내 자신을 올바르게 가꾸고 지켜서 \n삶을 행복하게 만들어 가겠습니다.",R.drawable.inner_bg_005, R.raw.a005, R.raw.b005, R.raw.g005));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","지금 이대로의 내 모습도 \n자랑스럽게 여기며 \n나의 꿈을 키우겠습니다.",R.drawable.inner_bg_006, R.raw.a006, R.raw.b006, R.raw.g006));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","나 스스로에게 \n부끄럽지 않고 \n당당한 사람이 되겠습니다.",R.drawable.inner_bg_007, R.raw.a007, R.raw.b007, R.raw.g007));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","나를 남과 비교하며 \n열등감에 빠지거나 \n우월감을 갖지 않겠습니다.",R.drawable.inner_bg_008, R.raw.a008, R.raw.b008, R.raw.g008));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","내 안에 숨어있는 \n무한한 가능성을 믿고 키우며 \n성장하겠습니다.",R.drawable.inner_bg_009, R.raw.a009, R.raw.b009, R.raw.g009));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","나는 자신감과 끈기를 갖고 \n모든 일을 \n열심히 하겠습니다.",R.drawable.inner_bg_010, R.raw.a010, R.raw.b010, R.raw.g010));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","나는 어떤 일도 해 낼 수 있는 \n능력과 의지를 가졌다는 \n긍정적인 생각을 하겠습니다.",R.drawable.inner_bg_011, R.raw.a011, R.raw.b011, R.raw.g011));
		LIST_MODEL_FRAMES.add(new ModelFrame("빛나는 존재, 나","나는 내가 가진 \n청정한 성품을 \n잘 지키겠습니다.",R.drawable.inner_bg_012, R.raw.a012, R.raw.b012, R.raw.g012));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","나는 청소년기를 \n지혜롭게 \n보내겠습니다.",R.drawable.inner_bg_013, R.raw.a013, R.raw.b013, R.raw.g013));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","때때로 거칠고 불안한 감정이 \n생기더라도 마음을 잘 다스려서 \n나의 참모습을 되찾겠습니다.",R.drawable.inner_bg_014, R.raw.a014, R.raw.b014, R.raw.g014));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","활달하거나 소심한 성격 모두 \n사회를 조화시키는 데 \n도움이 됨을 인정하겠습니다.",R.drawable.inner_bg_015, R.raw.a015, R.raw.b015, R.raw.g015));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","나를 힘들게 하는 상황이 오면, \n마음을 열고 \n주위에 도움을 청하겠습니다.",R.drawable.inner_bg_016, R.raw.a016, R.raw.b016, R.raw.g016));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","내가 실수를 하더라도 \n바로 잡을 줄 아는 용기를 가지며, \n같은 실수를 되풀이하지 않겠습니다.",R.drawable.inner_bg_017, R.raw.a017, R.raw.b017, R.raw.g017));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","내 몸과 마음을 \n모두 건강하게 가꾸겠습니다.",R.drawable.inner_bg_018, R.raw.a018, R.raw.b018, R.raw.g018));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","내 몸의 변화는 \n성장과정에 나타나는 \n당연한 것이므로 \n자연스럽게 받아들이겠습니다.",R.drawable.inner_bg_019, R.raw.a019, R.raw.b019, R.raw.g019));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","남자와 여자의 생물학적 차이가 \n우열의 기준이 아님을 알겠습니다.",R.drawable.inner_bg_020, R.raw.a020, R.raw.b020, R.raw.g020));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","나는 한 순간이라도 \n성을 폭력과 희롱의 수단으로 \n삼지 않겠습니다.",R.drawable.inner_bg_021, R.raw.a021, R.raw.b021, R.raw.g021));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","성은 생명을 창조하는 \n고귀한 선물임을 명심하겠습니다.",R.drawable.inner_bg_022, R.raw.a022, R.raw.b022, R.raw.g022));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","내 삶에 한 번 뿐인 \n청소년기를 \n알차게 보내겠습니다.",R.drawable.inner_bg_023, R.raw.a023, R.raw.b023, R.raw.g023));
		LIST_MODEL_FRAMES.add(new ModelFrame("아름다운 시절, 청소년기","내 삶을 \n술이나 담배 같은 해로운 습관으로 \n물들이지 않겠습니다.",R.drawable.inner_bg_024, R.raw.a024, R.raw.b024, R.raw.g024));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상에서 가장 멋진 공동체, 가족","한부모 가정이나 다문화가정처럼 \n다양한 가족 형태가 존재함을 \n인정하고 편견을 갖지 않겠습니다.",R.drawable.inner_bg_025, R.raw.a025, R.raw.b025, R.raw.g025));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상에서 가장 멋진 공동체, 가족","우리 가족은 나의 든든한 울타리이며, \n나는 우리 가족의 소중한 \n구성원임을 명심하겠습니다.",R.drawable.inner_bg_026, R.raw.a026, R.raw.b026, R.raw.g026));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상에서 가장 멋진 공동체, 가족","나는 가족의 구성원으로서 \n집안일도 책임감을 가지고 \n기꺼이 동참하겠습니다.",R.drawable.inner_bg_027, R.raw.a027, R.raw.b027, R.raw.g027));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상에서 가장 멋진 공동체, 가족","부모님께 무례한 마음을 갖거나 \n행동하지 않고 항상 \n공경하겠습니다.",R.drawable.inner_bg_028, R.raw.a028, R.raw.b028, R.raw.g028));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상에서 가장 멋진 공동체, 가족","부모님도 \n실수할 때가 있음을 알고 \n이해하겠습니다.",R.drawable.inner_bg_029, R.raw.a029, R.raw.b029, R.raw.g029));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상에서 가장 멋진 공동체, 가족","부모님의 능력이나 형편은 \n내가 이룬 것이 아니기에 자만심이나 \n열등감을 갖지 않겠습니다.",R.drawable.inner_bg_030, R.raw.a030, R.raw.b030, R.raw.g030));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상에서 가장 멋진 공동체, 가족","외출할 때 \n가족에게 행선지를 알리고 \n귀가 시간을 지키겠습니다.",R.drawable.inner_bg_031, R.raw.a031, R.raw.b031, R.raw.g031));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상에서 가장 멋진 공동체, 가족","일가친척에게 \n애정과 관심을 갖겠습니다.",R.drawable.inner_bg_032, R.raw.a032, R.raw.b032, R.raw.g032));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상에서 가장 멋진 공동체, 가족","나의 말과 행동이 \n동생들에게 \n모범이 될 수 있도록 하겠습니다.",R.drawable.inner_bg_033, R.raw.a033, R.raw.b033, R.raw.g033));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","나는 온화한 성품과 \n인성을 갖추겠습니다.",R.drawable.inner_bg_034, R.raw.a034, R.raw.b034, R.raw.g034));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","나는 얼굴을 가꾸듯 \n마음을 아름답게 가꾸겠습니다.",R.drawable.inner_bg_035, R.raw.a035, R.raw.b035, R.raw.g035));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","나는 마음의 평정심을 유지하며 \n화내거나 짜증내지 않겠습니다.",R.drawable.inner_bg_036, R.raw.a036, R.raw.b036, R.raw.g036));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","슬픔이나 괴로움은 \n마음먹기에 따라 행복으로 \n바꿀 수 있음을 기억하겠습니다.",R.drawable.inner_bg_037, R.raw.a037, R.raw.b037, R.raw.g037));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","누군가를 미워하거나 괴롭히면 \n내 마음도 다친다는 것을 \n기억하겠습니다.",R.drawable.inner_bg_038, R.raw.a038, R.raw.b038, R.raw.g038));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","남의 허물에는 엄격하고 \n나의 잘못에는 관대한 \n이중 잣대를 갖지 않겠습니다.",R.drawable.inner_bg_039, R.raw.a039, R.raw.b039, R.raw.g039));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","남에게 받은 상처를 \n마음에 오래 담아두지 않으며, \n그 상처로 아파하지 않겠습니다.",R.drawable.inner_bg_040, R.raw.a040, R.raw.b040, R.raw.g040));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","나는 어떠한 경우라도 \n물리적 폭력이나 언어적 폭력을 \n사용하지 않겠습니다.",R.drawable.inner_bg_041, R.raw.a041, R.raw.b041, R.raw.g041));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","무심코 한 말이나 행동으로 \n남에게 상처를 주지 않도록 \n조심하겠습니다.",R.drawable.inner_bg_042, R.raw.a042, R.raw.b042, R.raw.g042));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","욕설은 남의 명예를 훼손하고 \n모욕을 주는 말이므로 \n재미삼아 쓰지 않겠습니다.",R.drawable.inner_bg_043, R.raw.a043, R.raw.b043, R.raw.g043));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","사이버 공간에서 \n닉네임의 가면 뒤에 숨어 \n악플을 쓰지 않겠습니다.",R.drawable.inner_bg_044, R.raw.a044, R.raw.b044, R.raw.g044));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","나는 남을 도울 때 \n보답을 바라지 않겠습니다.",R.drawable.inner_bg_045, R.raw.a045, R.raw.b045, R.raw.g045));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","내 양심에 비추어 \n부끄럽지 않게 행동하고 \n정의롭게 살겠습니다.",R.drawable.inner_bg_046, R.raw.a046, R.raw.b046, R.raw.g046));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","돈과 물질적인 풍요만을 \n내 인생의 목표로 \n삼지 않겠습니다.",R.drawable.inner_bg_047, R.raw.a047, R.raw.b047, R.raw.g047));
		LIST_MODEL_FRAMES.add(new ModelFrame("나를 돋보이게 하는 인격","남의 시간과 계획도 \n귀하게 여기며 \n약속을 지키겠습니다.",R.drawable.inner_bg_048, R.raw.a048, R.raw.b048, R.raw.g048));
		LIST_MODEL_FRAMES.add(new ModelFrame("풍요로운 자산, 감성","나는 휴대전화나 컴퓨터에 \n노예처럼 얽매이지 않겠습니다.",R.drawable.inner_bg_049, R.raw.a049, R.raw.b049, R.raw.g048));
		LIST_MODEL_FRAMES.add(new ModelFrame("풍요로운 자산, 감성","나는 취미생활을 할 때에도 \n매 순간 최선을 다하겠습니다.",R.drawable.inner_bg_050, R.raw.a050, R.raw.b050, R.raw.g050));
		LIST_MODEL_FRAMES.add(new ModelFrame("풍요로운 자산, 감성","웃음으로 내 얼굴과 마음을 \n환하게 가꾸겠습니다.",R.drawable.inner_bg_051, R.raw.a051, R.raw.b051, R.raw.g051));
		LIST_MODEL_FRAMES.add(new ModelFrame("풍요로운 자산, 감성","나와 주위 사람을 \n행복하게 만드는 사람이 \n되겠습니다.",R.drawable.inner_bg_052, R.raw.a052, R.raw.b052, R.raw.g052));
		LIST_MODEL_FRAMES.add(new ModelFrame("풍요로운 자산, 감성","때때로 나는 \n세상을 두루 경험할 수 있는 \n여행을 하겠습니다.",R.drawable.inner_bg_053, R.raw.a053, R.raw.b053, R.raw.g053));
		LIST_MODEL_FRAMES.add(new ModelFrame("풍요로운 자산, 감성","다양한 문화예술을 경험하여 \n교양을 쌓고 \n성숙의 기회로 삼겠습니다.",R.drawable.inner_bg_054, R.raw.a054, R.raw.b054, R.raw.g054));
		LIST_MODEL_FRAMES.add(new ModelFrame("풍요로운 자산, 감성","나는 세상의 진실을 마주하고 \n바른 시각을 가질 수 있는 \n체험을 하겠습니다.",R.drawable.inner_bg_055, R.raw.a055, R.raw.b055, R.raw.g055));
		LIST_MODEL_FRAMES.add(new ModelFrame("풍요로운 자산, 감성","용돈은 예산을 세워서 \n알차게 쓰겠습니다.",R.drawable.inner_bg_056, R.raw.a056, R.raw.b056, R.raw.g056));
		LIST_MODEL_FRAMES.add(new ModelFrame("풍요로운 자산, 감성","나는 건강을 위해 \n편식을 하지 않으며, \n간단한 요리법을 \n하나쯤 익혀두겠습니다.",R.drawable.inner_bg_057, R.raw.a057, R.raw.b057, R.raw.g057));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","나는 내 인생의 올바른 목표를 세우고 \n정진하겠습니다.",R.drawable.inner_bg_058, R.raw.a058, R.raw.b058, R.raw.g058));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","내 마음의 그릇이 \n큰 그릇이 되도록 노력하겠습니다.",R.drawable.inner_bg_059, R.raw.a059, R.raw.b059, R.raw.g059));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","성공과 실패는 \n함께 할 수 있다는 것을 \n받아들이겠습니다.",R.drawable.inner_bg_060, R.raw.a060, R.raw.b060, R.raw.g060));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","철없는 판단으로 \n나 자신을 위험에 빠뜨리거나 \n미래에 흠집을 내지 않겠습니다.",R.drawable.inner_bg_061, R.raw.a061, R.raw.b061, R.raw.g061));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","나는 먼저 깊이 잘 생각한 다음에 \n말하고 행동하겠습니다.",R.drawable.inner_bg_062, R.raw.a062, R.raw.b062, R.raw.g062));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","새로운 일을 계획할 때 \n앞일을 예상하고 \n대응방법도 함께 생각해 보겠습니다.",R.drawable.inner_bg_063, R.raw.a063, R.raw.b063, R.raw.g063));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","한 번 시작한 일은 \n어려운 상황이 생겨도 \n끝까지 최선을 다하겠습니다.",R.drawable.inner_bg_064, R.raw.a064, R.raw.b064, R.raw.g064));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","나는 공부를 할 때 \n짧은 시간이라도 집중하겠습니다.",R.drawable.inner_bg_065, R.raw.a065, R.raw.b065, R.raw.g065));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","나는 단편적인 지식 습득보다는 \n끝없이 질문하고 탐구하는 습관을 \n기르겠습니다.",R.drawable.inner_bg_066, R.raw.a066, R.raw.b066, R.raw.g066));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","수많은 정보 속에서 \n올바른 정보를 골라내는 \n안목을 키우겠습니다.",R.drawable.inner_bg_067, R.raw.a067, R.raw.b067, R.raw.g067));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","나는 평소에도 \n시간을 효율적으로 \n관리하겠습니다.",R.drawable.inner_bg_068, R.raw.a068, R.raw.b068, R.raw.g068));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","인생의 지침으로 삼을 수 있는 \n좌우명을 정해 \n마음에 새기고 실천하겠습니다.",R.drawable.inner_bg_069, R.raw.a069, R.raw.b069, R.raw.g069));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","내가 존경하는 분의 \n올바른 가치관과 행동을 \n본받겠습니다.",R.drawable.inner_bg_070, R.raw.a070, R.raw.b070, R.raw.g070));
		LIST_MODEL_FRAMES.add(new ModelFrame("나는 내 삶의 디자이너","내가 좋아하는 일, 잘 하는 일, \n세상에 도움 되는 일을 \n직업 선택의 기준으로 삼겠습니다.",R.drawable.inner_bg_071, R.raw.a071, R.raw.b071, R.raw.g071));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","학교는 친구들과 어울리며 \n더불어 성장하는 곳임을 \n명심하겠습니다.",R.drawable.inner_bg_072, R.raw.a072, R.raw.b072, R.raw.g072));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","나는 학교 친구들과 \n즐겁게 생활하고 \n서로 도와주며 지내겠습니다.",R.drawable.inner_bg_073, R.raw.a073, R.raw.b073, R.raw.g073));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","나는 학교 동아리 활동에 \n적극적으로 참여하겠습니다.",R.drawable.inner_bg_074, R.raw.a074, R.raw.b074, R.raw.g074));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","나 먼저 솔선수범하여 \n교실을 청소하고 \n정리정돈 하겠습니다.",R.drawable.inner_bg_075, R.raw.a075, R.raw.b075, R.raw.g075));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","나와 친구는 삶이라는 긴 여정을 \n함께 하는 동반자이기에 \n진심으로 대하겠습니다.",R.drawable.inner_bg_076, R.raw.a076, R.raw.b076, R.raw.g076));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","나는 \n친구를 먼저 배려하는 마음을 \n갖겠습니다.",R.drawable.inner_bg_077, R.raw.a077, R.raw.b077, R.raw.g077));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","친구와 갈등이 생겼을 때 \n자존심 때문에 \n화해할 기회를 놓치지 않겠습니다.",R.drawable.inner_bg_078, R.raw.a078, R.raw.b078, R.raw.g078));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","친구가 없는 곳에서 험담을 하거나 \n친구의 비밀이나 단점을 \n함부로 발설하지 않겠습니다.",R.drawable.inner_bg_079, R.raw.a079, R.raw.b079, R.raw.g079));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","선생님은 \n나를 바른 길로 이끌어주시는 분이므로 \n예의바르게 행동하겠습니다.",R.drawable.inner_bg_080, R.raw.a080, R.raw.b080, R.raw.g080));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","남에게 충고할 때는 \n나 자신을 돌아보고 \n그를 위하는 마음을 담아 하겠습니다.",R.drawable.inner_bg_081, R.raw.a081, R.raw.b081, R.raw.g081));
		LIST_MODEL_FRAMES.add(new ModelFrame("내 삶의 등불, 친구와 스승","다른 사람이 나를 위해 \n충고를 할 때는 \n겸손하게 받아들이겠습니다.",R.drawable.inner_bg_082, R.raw.a082, R.raw.b082, R.raw.g082));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","나는 지구인으로서 \n세계에서 일어나는 일에 \n관심을 갖겠습니다.",R.drawable.inner_bg_083, R.raw.a083, R.raw.b083, R.raw.g083));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","세계의 다양한 문화는 \n인류를 풍요롭게 만드는 것임을 \n기억하겠습니다.",R.drawable.inner_bg_084, R.raw.a084, R.raw.b084, R.raw.g084));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","우리 것과 다른 문화를 \n배척하지 않고 \n있는 그대로 인정하겠습니다.",R.drawable.inner_bg_085, R.raw.a085, R.raw.b085, R.raw.g085));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","세상의 가치를 내 \n기준에 맞춰 \n편 가르지 않겠습니다.",R.drawable.inner_bg_086, R.raw.a086, R.raw.b086, R.raw.g086));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","나는 민주시민으로서 \n권리와 의무를 다하겠습니다.",R.drawable.inner_bg_087, R.raw.a087, R.raw.b087, R.raw.g087));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","사회의 부조리에 관심을 갖고 \n사회적 약자를 돕겠습니다.",R.drawable.inner_bg_088, R.raw.a088, R.raw.b088, R.raw.g088));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","나는 우리 사회의 소수자를 \n편견으로 대하지 않겠습니다.",R.drawable.inner_bg_089, R.raw.a089, R.raw.b089, R.raw.g089));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","나는 역사의 주인공임을 명심하고 \n좋은 사회를 만드는 데 \n도움이 되겠습니다.",R.drawable.inner_bg_090, R.raw.a090, R.raw.b090, R.raw.g090));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","나는 봉사활동이 남을 배려하고 \n깨달음을 얻는 기회임을 \n명심하겠습니다.",R.drawable.inner_bg_091, R.raw.a091, R.raw.b091, R.raw.g091));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","나는 모든 생명을 \n귀하게 여기겠습니다.",R.drawable.inner_bg_092, R.raw.a092, R.raw.b092, R.raw.g092));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","나는 자연을 아끼고 사랑하며 \n후손에게 건강한 환경을 \n물려주겠습니다.",R.drawable.inner_bg_093, R.raw.a093, R.raw.b093, R.raw.g093));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","내 편리를 위해 \n환경을 해치지 않겠으며 \n환경보호를 실천하겠습니다.",R.drawable.inner_bg_094, R.raw.a094, R.raw.b094, R.raw.g094));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","내가 존중받기 원하는 마음으로 \n상대방을 먼저 존중하겠습니다.",R.drawable.inner_bg_095, R.raw.a095, R.raw.b095, R.raw.g095));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","나는 외적인 조건으로 \n사람을 판단하지 않겠습니다.",R.drawable.inner_bg_096, R.raw.a096, R.raw.b096, R.raw.g096));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","나는 타인의 지적재산권을 \n침해하지 않겠습니다.",R.drawable.inner_bg_097, R.raw.a097, R.raw.b097, R.raw.g097));
		LIST_MODEL_FRAMES.add(new ModelFrame("나의 사상과 행동이 곧 역사","나는 사회규범을 \n잘 지키겠습니다.",R.drawable.inner_bg_098, R.raw.a098, R.raw.b098, R.raw.g098));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상과 이야기하는 법","내가 모르는 것을 \n아는 척하지 않겠습니다.",R.drawable.inner_bg_099, R.raw.a099, R.raw.b099, R.raw.g099));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상과 이야기하는 법","대화를 할 때 \n내 주장만 하지 않겠습니다.",R.drawable.inner_bg_100, R.raw.a100, R.raw.b100, R.raw.g100));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상과 이야기하는 법","대화를 할 때 \n건성으로 답변하지 않고 \n성의를 다해 이야기하겠습니다.",R.drawable.inner_bg_101, R.raw.a101, R.raw.b101, R.raw.g101));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상과 이야기하는 법","오해가 생겼을 때 \n상대방의 말을 충분히 듣고 나서 \n판단하겠습니다.",R.drawable.inner_bg_102, R.raw.a102, R.raw.b102, R.raw.g102));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상과 이야기하는 법","상대방이 싫다고 하거나 \n거절하는 것도 \n이해하며 받아들이겠습니다.",R.drawable.inner_bg_103, R.raw.a103, R.raw.b103, R.raw.g103));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상과 이야기하는 법","나의 잘못이나 실수를 \n타인의 탓으로 돌리지 않겠습니다.",R.drawable.inner_bg_104, R.raw.a104, R.raw.b104, R.raw.g104));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상과 이야기하는 법","나는 우연한 만남도 \n좋은 인연이 되도록 하겠습니다.",R.drawable.inner_bg_105, R.raw.a105, R.raw.b105, R.raw.g105));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상과 이야기하는 법","나는 이성 친구를 대할 때 \n예의를 갖추겠습니다.",R.drawable.inner_bg_106, R.raw.a106, R.raw.b106, R.raw.g106));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상과 이야기하는 법","나는 남을 쉽게 동정하거나 \n무시하지 않겠습니다.",R.drawable.inner_bg_107, R.raw.a107, R.raw.b107, R.raw.g107));
		LIST_MODEL_FRAMES.add(new ModelFrame("세상과 이야기하는 법","내가 가진 것에 집착하거나 \n갖지 않은 것을 탐하지 않고 \n세상의 이로움을 위해 베풀며 살겠습니다.",R.drawable.inner_bg_108, R.raw.a108, R.raw.b108, R.raw.g108));

	}
	
	public final static void INIT_FRAMES_SOUND(ExightSoundPool soundPool){
		soundPool.addSound(R.raw.bell);
		soundPool.addSound(R.raw.click);
		
		
		for(ModelFrame m : LIST_MODEL_FRAMES){
			soundPool.addSound(m.soundIdOfChild);
			soundPool.addSound(m.soundIdOfMan);
			soundPool.addSound(m.soundIdOfWoman);
		}
	}
	
}
