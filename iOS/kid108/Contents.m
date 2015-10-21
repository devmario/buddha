//
//  Contents.m
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 2..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import "Contents.h"

@implementation Contents


+ (UIImage *)playBgWithNumber:(int)number
{
    NSString *fileName = nil;
    if (number<10) {
        fileName = [NSString stringWithFormat:@"00%d",number];
    } else if (number<100) {
        fileName = [NSString stringWithFormat:@"0%d",number];
    } else if (number<1000) {
        fileName = [NSString stringWithFormat:@"%d",number];
    }
    UIImage *imageForReturn = IMAGE_JPG(fileName);
    return imageForReturn;
}

+ (NSString *)titleWithCount:(int)count
{
    NSString *stringForReturn = nil;
    
    if (1<=count && count<10) {
        stringForReturn = @"- 나는 소중한 사람이에요 -";
    } else if (10<=count && count<24) {
        stringForReturn = @"- 나는 향기로운 사람이에요 -";
    } else if (24<=count && count<36) {
        stringForReturn = @"- 마음에 지혜를 담겠어요 -";
    } else if (36<=count && count<46) {
        stringForReturn = @"- 나는 행복한 사람이에요 -";
    } else if (46<=count && count<54) {
        stringForReturn = @"- 내 삶의 주인은 바로 나예요 -";
    } else if (54<=count && count<64) {
        stringForReturn = @"- 가족은 든든한 울타리에요 -";
    } else if (64<=count && count<77) {
        stringForReturn = @"- 친구는 내 인생의 보물이에요 -";
    } else if (77<=count && count<88) {
        stringForReturn = @"- 학교는 또 다른 집이에요 -";
    } else if (88<=count && count<103) {
        stringForReturn = @"- 우리는 어울려 살아요 -";
    } else if (103<=count && count<108) {
        stringForReturn = @"- 나는 존중받을 권리가 있어요 -";
    }
    
    return stringForReturn;
}

+ (NSString *)subtitleWithCount:(int)count
{
    //int number = [numberString intValue];
    NSString *stringForReturn = nil;
    
    //청소년 마음 거울 108
    switch (count)
    {
            //◎ 나는 소중한 사람이에요
        case 1 :
            stringForReturn = @"나는 이 세상에 하나밖에 없는 \n소중한 사람이에요.";
            break;
        case 2:
            stringForReturn = @"나는 사랑을 받으며 \n자라고 있어요.";
            break;
        case 3:
            stringForReturn = @"많은 사람이 내 몸과 마음이 \n건강하게 자라도록 지켜주는 것을 알아요.";
            break;
        case 4:
            stringForReturn = @"나는 우리나라의 꿈나무예요.";
            break;
        case 5:
            stringForReturn = @"나는 겉모습보다 \n속마음이 훨씬 예쁜 사람이에요.";
            break;
        case 6:
            stringForReturn = @"나는 언제나 \n자신감 있게 행동하겠어요.";
            break;
        case 7:
            stringForReturn = @"어떤 일을 하던‘나는 잘 할 수 있어.’하며 \n나를 응원하겠어요.";
            break;
        case 8:
            stringForReturn = @"나는 새로운 일도 \n두렵지 않아요.";
            break;
        case 9:
            stringForReturn = @"착하고 지혜로운 \n나의 참모습을 지켜나가겠어요.";
            break;
            
            //◎ 나는 향기로운 사람이에요
        case 10:
            stringForReturn = @"나는 좋은 성격과 \n밝은 마음을 가꾸어가겠어요.";
            break;
        case 11:
            stringForReturn = @"때때로 내 모습을 돌아보며 \n잘못을 고치겠어요.";
            break;
        case 12:
            stringForReturn = @"나는 작은 일에 화내거나 \n짜증내지 않겠어요.";
            break;
        case 13:
            stringForReturn = @"무조건 내가 옳다고 \n우기지 않겠어요.";
            break;
        case 14:
            stringForReturn = @"내가 말한 것은 \n책임지고 지키겠어요.";
            break;
        case 15:
            stringForReturn = @"일이 잘못되었을 때 남의 탓을 하기보다 \n내 잘못을 먼저 생각해 보겠어요.";
            break;
        case 16:
            stringForReturn = @"나는 어려운 일도 \n슬기롭게 헤쳐 나갈 수 있어요.";
            break;
        case 17:
            stringForReturn = @"나는 같은 실수를 \n반복하지 않겠어요.";
            break;
        case 18:
            stringForReturn = @"나 혼자만 즐겁기 위해 \n다른 사람의 즐거움을 빼앗지 않겠어요.";
            break;
        case 19:
            stringForReturn = @"남들보다 못하는 일이 있어도 \n한심하게 여기지 않겠어요.";
            break;
        case 20:
            stringForReturn = @"나만의 특기를 찾아서 \n가꾸겠어요.";
            break;
        case 21:
            stringForReturn = @"내가 남들보다 조금 잘 하는 것이 있다고 \n우쭐대지 않겠어요.";
            break;
        case 22:
            stringForReturn = @"친구가 잘하는 것은 \n인정하고 칭찬하겠어요.";
            break;
        case 23:
            stringForReturn = @"나는 친구를 시기하거나 \n질투하지 않겠어요.";
            break;
            
            //◎ 마음에 지혜를 담겠어요
        case 24:
            stringForReturn = @"내 주변에서 일어나는 일에 \n호기심을 갖고 관찰하겠어요.";
            break;
        case 25:
            stringForReturn = @"나는 좋은 책을 골라 읽고 \n책 속에 담긴 뜻을 생각해 보겠어요.";
            break;
        case 26:
            stringForReturn = @"내 마음을 열고 \n친구나 동생에게도 배우겠어요. ";
            break;
        case 27:
            stringForReturn = @"나는 실패를 부끄러워하지 않고 \n실패에서 더 많이 배우겠어요.";
            break;
        case 28:
            stringForReturn = @"내게 주어진 일을 \n즐겁게 하겠어요.";
            break;
        case 29:
            stringForReturn = @"내 마음에 부끄럽지 않게 \n행동하겠어요.";
            break;
        case 30:
            stringForReturn = @"남에게 기대지 않고 \n내 일을 스스로 하겠어요.";
            break;
        case 31:
            stringForReturn = @"나를 위험에 빠뜨릴 수 있는 \n거짓말을 하지 않겠어요.";
            break;
        case 32:
            stringForReturn = @"다른 사람의 놀림에 당황하지 않고 \n당당하게 행동하겠어요.";
            break;
        case 33:
            stringForReturn = @"슬픔이나 괴로움은 언젠가는 \n사라지는 것이므로 꿋꿋하게 견디겠어요.";
            break;
        case 34:
            stringForReturn = @"쓸데없는 욕심과 고집으로 \n내 마음을 괴롭히지 않겠어요.";
            break;
        case 35:
            stringForReturn = @"화나고 짜증나는 일도 한 번만 참으면 \n마음이 편해진다는 것을 기억하겠어요.";
            break;
            
            //◎ 나는 행복한 사람이에요
        case 36:
            stringForReturn = @"나는 날마다 \n행복한 생각을 하겠어요.";
            break;
        case 37:
            stringForReturn = @"나는 얼굴을 찌푸리는 대신 \n환하게 웃겠어요.";
            break;
        case 38:
            stringForReturn = @"나보다 어렵고 불행한 사람을 보면서 \n‘나는 행복해’ 하며 비교하지 않겠어요.";
            break;
        case 39:
            stringForReturn = @"나보다 잘 사는 친구를 보면서 \n‘나는 불행해’ 하는 생각도 하지 않겠어요.";
            break;
        case 40:
            stringForReturn = @"연예인만 좋아하지 않고 \n다양한 예술 작품에 관심을 갖겠어요.";
            break;
        case 41:
            stringForReturn = @"컴퓨터나 게임은 \n시간을 정해 두고 즐기겠어요.";
            break;
        case 42:
            stringForReturn = @"인터넷을 이용할 때 소중한 개인정보를 \n함부로 알려주지 않겠어요.";
            break;
        case 43:
            stringForReturn = @"내가 재미있게 할 수 있는 \n취미를 찾아 즐기겠어요.";
            break;
        case 44:
            stringForReturn = @"용돈은 마구 써버리지 않고 \n계획을 세워서 알뜰하게 쓰겠어요.";
            break;
        case 45:
            stringForReturn = @"나는 \n올바른 생활 습관을 갖겠어요.";
            break;
            
            //◎ 내 삶의 주인은 바로 나예요
        case 46:
            stringForReturn = @"나는 희망의 꽃씨이므로 \n스스로 아끼고 보호하겠어요.";
            break;
        case 47:
            stringForReturn = @"존경하는 사람을 정해두고 \n닮으려고 노력하겠어요.";
            break;
        case 48:
            stringForReturn = @"가르침을 받을 수 있는 \n좋은 말을 마음에 새겨두겠어요.";
            break;
        case 49:
            stringForReturn = @"공부나 새로운 일을 할 때는 \n계획을 먼저 세우겠어요.";
            break;
        case 50:
            stringForReturn = @"공부를 조금 못해도 \n실망하거나 포기하지 않겠어요.";
            break;
        case 51:
            stringForReturn = @"나는 지금보다 \n훨씬 멋진 모습으로 자랄 것을 믿어요.";
            break;
        case 52:
            stringForReturn = @"한 번 시작한 일은 \n끈기 있게 해내겠어요.";
            break;
        case 53:
            stringForReturn = @"10년 뒤, 20년 뒤의 내 모습을 마음속에 그려놓고 \n꿈을 이루기 위해 노력하겠어요.";
            break;
            
            //◎ 가족은 든든한 울타리에요
        case 54:
            stringForReturn = @"가족의 모습은 다양하기 때문에 \n나와 다른 가정도 이상한 눈길로 보지 않겠어요.";
            break;
        case 55:
            stringForReturn = @"나는 부모님께 고마운 마음을 가지고 \n부모님의 말씀을 잘 듣겠어요.";
            break;
        case 56:
            stringForReturn = @"부모님이나 형제, 자매를 \n다른 집과 비교하며 불평하지 않겠어요.";
            break;
        case 57:
            stringForReturn = @"가족은 편한 사이지만 \n예의에 벗어난 행동을 하지는 않겠어요.";
            break;
        case 58:
            stringForReturn = @"가족에게 부드러운 표정으로 \n다정하게 말하겠어요.";
            break;
        case 59:
            stringForReturn = @"형제자매끼리 다투지 않고 \n아끼며 돕겠어요.";
            break;
        case 60:
            stringForReturn = @"가정에서 내 역할은 몸과 마음을 건강하게 가꾸며 \n즐겁게 공부하는 것이에요.";
            break;
        case 61:
            stringForReturn = @"가족 모두가 해야 하는 \n집안일을 열심히 하겠어요.";
            break;
        case 62:
            stringForReturn = @"학교에서 일어난 일을 부모님께 \n자주 말씀드리겠어요.";
            break;
        case 63:
            stringForReturn = @"친척의 올바른 호칭을 알아두고 \n집안 행사에 즐겁게 참여하겠어요.";
            break;
            
            //◎ 친구는 내 인생의 보물이에요
        case 64:
            stringForReturn = @"나와 친구들은 잘하는 일이 \n한 가지씩은 있어요.";
            break;
        case 65:
            stringForReturn = @"나는 친구를 속이거나 \n함부로 대하지 않겠어요.";
            break;
        case 66:
            stringForReturn = @"나는 친구가 어려울 때 \n도움을 주는 멋진 친구가 되겠어요.";
            break;
        case 67:
            stringForReturn = @"나는 친구의 좋은 점을 \n배우겠어요.";
            break;
        case 68:
            stringForReturn = @"나는 친구와의 약속을 \n소중히 생각하고 꼭 지키겠어요.";
            break;
        case 69:
            stringForReturn = @"나는 친구의 약점이나 실수를 \n들추어내지 않겠어요.";
            break;
        case 70:
            stringForReturn = @"나는 친구의 비밀을 \n남에게 함부로 말하지 않겠어요.";
            break;
        case 71:
            stringForReturn = @"난 친구가 없는 자리에서 \n친구의 흉을 보지 않겠어요.";
            break;
        case 72:
            stringForReturn = @"나는 친구에게 상처가 되는 말 대신 \n용기를 주는 말을 하겠어요.";
            break;
        case 73:
            stringForReturn = @"친구가 섭섭하게 대해도 화내지 않고 \n‘왜 그랬을까’를 먼저 생각하겠어요.";
            break;
        case 74:
            stringForReturn = @"내 주장만 하지 않고 \n친구의 말을 끝까지 들어주겠어요.";
            break;
        case 75:
            stringForReturn = @"친구와 다투었을 때 \n내가 먼저 화해하겠어요.";
            break;
        case 76:
            stringForReturn = @"생김새나 차림새로 친구를 무시하거나 \n따돌리지 않겠어요.";
            break;
            
            //◎ 학교는 또 다른 집이에요
        case 77:
            stringForReturn = @"학교는 공부만 하는 곳이 아니라 \n내가 성장하는 곳임을 알아요.";
            break;
        case 78:
            stringForReturn = @"즐거운 마음으로 \n학교생활을 하겠어요.";
            break;
        case 79:
            stringForReturn = @"나를 가르쳐주시는 선생님께 \n고마운 마음을 갖겠어요.";
            break;
        case 80:
            stringForReturn = @"모두가 함께 쓰는 학교의 물건을 \n함부로 다루지 않겠어요.";
            break;
        case 81:
            stringForReturn = @"교실은 친구와 함께 쓰는 곳이므로 \n정리정돈을 잘하겠어요.";
            break;
        case 82:
            stringForReturn = @"수업시간에는 집중하고 \n친구의 공부를 방해하지 않겠어요.";
            break;
        case 83:
            stringForReturn = @"예습과 복습을 잘 하고 준비물을 스스로 챙기겠어요.";
            break;
        case 84:
            stringForReturn = @"값비싼 물건을 학교에 가져가서 \n자랑하지 않겠어요.";
            break;
        case 85:
            stringForReturn = @"우리 반에 어떤 문제가 생기면 \n학급회의 때 해결방법을 찾아보겠어요.";
            break;
        case 86:
            stringForReturn = @"급식은 남기지 않고 \n맛있게 먹겠어요.";
            break;
        case 87:
            stringForReturn = @"학교 도서관을 \n자주 이용하겠어요.";
            break;
            
            //◎ 우리는 어울려 살아요
        case 88:
            stringForReturn = @"나는 한국 사람인 동시에 \n지구에 사는 사람임을 잊지 않겠어요.";
            break;
        case 89:
            stringForReturn = @"다른 나라의 어린이에게도 \n관심을 갖겠어요.";
            break;
        case 90:
            stringForReturn = @"이 땅에 함께 사는 생명들을 \n귀하게 여기고 환경을 보호하겠어요.";
            break;
        case 91:
            stringForReturn = @"피부색이 다른 사람을 \n무시하거나 차별하지 않겠어요.";
            break;
        case 92:
            stringForReturn = @"우리보다 가난한 나라의 문화도 \n존중하겠어요.";
            break;
        case 93:
            stringForReturn = @"몸이 불편한 사람을 \n불쌍한 눈으로 보지 않겠어요.";
            break;
        case 94:
            stringForReturn = @"다른 사람을 돕는 봉사활동에 \n적극적으로 참여하겠어요.";
            break;
        case 95:
            stringForReturn = @"형편이 어려운 지구촌 사람에게 \n따뜻한 마음을 베풀겠어요.";
            break;
        case 96:
            stringForReturn = @"내가 누리는 것들은 다른 사람의 땀으로 \n마련된 것임을 잊지 않겠어요";
            break;
        case 97:
            stringForReturn = @"신호등 지키기처럼 \n사회가 정한 규칙을 잘 지키겠어요.";
            break;
        case 98:
            stringForReturn = @"내 집이라도 소리 지르거나 뛰면서 \n이웃에 피해를 주지 않겠어요.";
            break;
        case 99:
            stringForReturn = @"거리에서 아는 사람을 만나면 \n먼저 인사하겠어요.";
            break;
        case 100:
            stringForReturn = @"내 생각이 틀릴 때도 많다는 것을 \n기억하겠어요.";
            break;
        case 101:
            stringForReturn = @"나와 의견이 다른 것을 \n나쁘다고 말하지 않겠어요.";
            break;
        case 102:
            stringForReturn = @"내 잘못은 그냥 넘어가면서 \n남의 잘못은 따져 묻는 일은 하지 않겠어요.";
            break;
            
            //◎ 나는 존중받을 권리가 있어요
        case 103:
            stringForReturn = @"어린이는 보호받을 권리가 있으므로 \n위험할 때는 주변에 도움을 청하겠어요.";
            break;
        case 104:
            stringForReturn = @"내게는 어린이가 할 수 없는 일을 \n하지 않을 권리가 있어요.";
            break;
        case 105:
            stringForReturn = @"나는 건강을 지키기 위해서 \n마음껏 뛰어놀겠어요.";
            break;
        case 106:
            stringForReturn = @"불량식품이나 위험한 장난감을 \n가까이 하지 않겠어요.";
            break;
        case 107:
            stringForReturn = @"나는 남자 또는 여자라는 이유로 \n차별받지 않을 권리가 있어요.";
            break;
        case 108:
            stringForReturn = @"나는 세상을 \n밝고 행복하게 만드는 사람으로 자라겠어요.";
            break;
            
        default:
            break;
    }
    
    return stringForReturn;
}


+ (NSString *)sequenceText:(int)number
{
    NSString *stringForReturn = nil;
//    int number = [numberString intValue];
    switch (number)
    {
        case 0:
            stringForReturn = @"마음을 차분하게 가라앉히고 두 손을 가슴에 모으며 바르게 섭니다. 이것을 합장이라 합니다.";
            break;
        case 1:
            stringForReturn = @"합장을 한 채 인사를 하듯 천천히 허리를 숙였다 세웁니다. 이것을 반배라하는데 절을시작할때와 끝날 때에는 항상 반배를 합니다.";
            break;
        case 2:
            stringForReturn = @"두손을 가슴에 모은 채 허리를 살짝 굽히면서 무릎을 꿇으며 앉습니다. 자세가 흐트러지면 넘어질 수 있으니 천천히 중심을 잡으며 앉습니다.";
            break;
        case 3:
            stringForReturn = @"엉덩이와 발 뒤꿈치가 맞닿을 때쯤 상체를 앞으로 숙이면서 오른손을 바닥에 내려놓습니다. 발은 자연스럽게 오른발이 왼발 위로 올라가게 합니다. 오른손과 나란히 왼손을 내려놓으며 이마가 바닥에 닿을 정도로 숙입니다. 이처럼 이마, 양쪽 팔꿈치와 무릎이 모두 바닥에 닿은 것을 오체투지라 합니다.";
            break;
        case 4:
            stringForReturn = @"양쪽 팔꿈치를 바닥에 댄 채 두 손바닥이 하늘을 향하도록 뒤집으면서 양쪽 귀옆으로 살짝 들어올립니다. 이것은 나 자신을 낮추고 세상 모든 존재를 지극한 마음으로 정성을 다해 존중하겠다는 다짐입니다.";
            break;
        case 5:
            stringForReturn = @"다시 두 손을 바닥을 향해 뒤집어 머리 옆으로 가지런히 내려놓으며 오체투지 자세를 취합니다.";
            break;
        case 6:
            stringForReturn = @"고개와 허리를 곧은 자세로 들면서 왼손과 오른손을 차례로 가슴 쪽으로 모읍니다. 이렇게 하면 합장하며 앉은 자세가 됩니다.";
            break;
        case 7:
            stringForReturn = @"포게 놓았던 양 발을 가지런히 풀면서 엉덩이를 살짝 들어올리며 일어납니다. 절을 시작할 때의 자세처럼 양쪽발은 가지런히 모으고 두 손은 가슴쪽으로 모아 바르게 섭니다. 이 자세에서 무릎을 굽히며 다시 절하는 동작을 반복합니다. 108번째 절을 마쳤을 때엔 반 배를 하며 절 수행을 마무리합니다.";
            break;
            
        default:
            break;
    }
    
    return stringForReturn;
}
+ (NSURL *)sequenceVoiceUrl:(int)number
{
    NSString *fileName = [NSString stringWithFormat:@"how%d",number+1];
    NSURL *urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:fileName ofType:@"mp3"]];
    return urlForReturn;
}


+ (NSURL *)appInfoVoiceUrl
{
    NSString *fileName = @"appInfo";
    NSURL *urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:fileName ofType:@"mp3"]];
    return urlForReturn;
}



+ (NSURL *)URLWithBGMType:(NSString *)type
{
    NSURL *urlForReturn = nil;
    
    if ([type isEqualToString:VALUE_BGM_TYPE_BIRD]) {
        urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"birdBgm" ofType:@"mp3"]];
    } else if ([type isEqualToString:VALUE_BGM_TYPE_BUG]) {
        urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"bugBgm" ofType:@"mp3"]];
    } else if ([type isEqualToString:VALUE_BGM_TYPE_WATER]) {
        urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"waterBgm" ofType:@"mp3"]];
    } else if ([type isEqualToString:VALUE_BGM_TYPE_MUSIC]) {
        NSURL *url = [NSURL URLWithString:GET(KEY_URL_BGM_TYPE_MUSIC)];
        AVURLAsset *songAsset = [AVURLAsset URLAssetWithURL:url options:nil];
        urlForReturn = songAsset.URL;
    }
    
    return urlForReturn;
}

+ (NSURL *)voiceURLWithNumber:(int)number
{
    NSURL *urlForReturn = nil;

    NSString *fileName = nil;
    NSString *type = GET(KEY_VOICE_TYPE);
    if ([type isEqualToString:VALUE_VOICE_TYPE_MAN]) {
        fileName = [NSString stringWithFormat:@"b00%d", number];
    } else if ([type isEqualToString:VALUE_VOICE_TYPE_GIRL]) {
        fileName = [NSString stringWithFormat:@"g00%d", number];
    } else if ([type isEqualToString:VALUE_VOICE_TYPE_DUBBING]) {
        fileName = [NSString stringWithFormat:@"a00%d", number];
    }

    int length = [fileName length];
    if (length==5) {
        fileName = [fileName stringByReplacingCharactersInRange:NSMakeRange(1, 1) withString:@""];
    } else if (length==6) {
        fileName = [fileName stringByReplacingCharactersInRange:NSMakeRange(1, 2) withString:@""];
    }
    
    urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:fileName ofType:@"mp3"]];
    return urlForReturn;
}


+ (void)playVoiceWithNumber:(int)number
{
    [Functions audioPlayerWithRetainObject:KEY_VOICE_TYPE
                                   playURL:[Contents voiceURLWithNumber:number]
                                    volume:1*([GET(KEY_VOICE_VOLUME) intValue]/VALUE_VOICE_VOLUME_MAX)
                             numberOfLoops:0 ];
}

+ (void)playBGMWithType:(NSString *)type
{
    if ([type isEqualToString:VALUE_BGM_TYPE_MUSIC])
    {
        [[Functions audioPlayerWithRetainObject:KEY_BGM_TYPE] stop];
        [Functions avPlayerWithRetainObject:nil
                                    playURL:[Contents URLWithBGMType:type]
                                    repeats:YES];
    }
    else
    {
        [Functions avPlayerWithRetainObject:nil playURL:nil repeats:NO];
        [Functions audioPlayerWithRetainObject:KEY_BGM_TYPE
                                       playURL:[Contents URLWithBGMType:type]
                                        volume:1*([GET(KEY_BGM_VOLUME) intValue]/VALUE_BGM_VOLUME_MAX)
                                 numberOfLoops:-1 ];
    }
}


@end
