var Observable = require("FuseJS/Observable");

/*

Help Page

*/

var animText0 = Observable(false);
var animText1 = Observable(false);
var animText2 = Observable(false);
var animText3 = Observable(false);
var animText4 = Observable(false);
var animText5 = Observable(false);
var animText6 = Observable(false);
var animText7 = Observable(false);
var help2NaviAlpha0 = Observable(0.5);
var help2NaviAlpha1 = Observable(1.0);
var help2NaviAlpha2 = Observable(1.0);

var animFrame = 0;
var animTo = 0;
var animSpeed = 1000/5;
var animSequence = [0, 15, 27, 35, 40, 44, 51, 59];
var animIndex = 0;

var timeout = null;

var frameCheck = Observable(false);
var frame = Observable({key:"kid0"});

var Audio = require('AudioModule');

function animCommit() {
	frameCheck.value = false;
	frame.value.key = "kid" + animFrame;
	frameCheck.value = true;
}

function animationStart() {
	if(timeout != null) {
		clearTimeout(timeout);
		timeout = null;
	}
	if(animFrame < animTo) {
		animFrame++;
	} else {
		animFrame = animTo;
	}
	animCommit();
	if(animFrame != animTo) {
		timeout = setTimeout(animationStart, animSpeed);
	} else {
		if(animIndex == 0) {
			help2NaviAlpha1.value = 0.0;
		} else {
			help2NaviAlpha1.value = 1.0;
		}
	}
}

function animUpdate() {
	if(animIndex == 0) {
		help2NaviAlpha1.value = 0.0;
	} else {
		help2NaviAlpha1.value = 0.5;
	}
	if(animIndex > 0) {
		animFrame = animSequence[animIndex - 1];
		animTo = animSequence[animIndex];
	} else {
		animFrame = 0;
		animTo = 0;
	}
	animationStart();
	Audio.play("res/snd/how"+ (animIndex + 1) + ".mp3", "voice", "false");
}

function animGoToPlaySequence(index) {
	if(index > animSequence.length - 1)
		return;
	if(index < 0)
		return;
	if(animIndex != index) {
		animIndex = index;
	}

	help2NaviAlpha0.value = 1.0;
	help2NaviAlpha1.value = 1.0;
	help2NaviAlpha2.value = 1.0;
	if(index == 0) {
		help2NaviAlpha0.value = 0.5;
	}
	if(index == animSequence.length - 1)
		help2NaviAlpha2.value = 0.5;

	animUpdate();

	animText0.value = index == 0;
	animText1.value = index == 1;
	animText2.value = index == 2;
	animText3.value = index == 3;
	animText4.value = index == 4;
	animText5.value = index == 5;
	animText6.value = index == 6;
	animText7.value = index == 7;
}


function help2Active(arg) {
	animGoToPlaySequence(0);
}

function help2InActive(arg) {
	Audio.disposePlayer("voice");
}

function help2NaviPrev(arg) {
	animGoToPlaySequence(animIndex - 1);
}

function help2NaviPlay(arg) {
	animUpdate();
}

function help2NaviNext(arg) {
	animGoToPlaySequence(animIndex + 1);
}

function clickBT(arg) {
	Audio.play("res/snd/click.mp3", "effect", "false");
}


/*

Module

*/

module.exports = {
	help2Active: help2Active,
	help2InActive: help2InActive,

	animText0: animText0,
	animText1: animText1,
	animText2: animText2,
	animText3: animText3,
	animText4: animText4,
	animText5: animText5,
	animText6: animText6,
	animText7: animText7,
	
	help2NaviPrev: help2NaviPrev,
	help2NaviPlay: help2NaviPlay,
	help2NaviNext: help2NaviNext,
	
	help2NaviAlpha0: help2NaviAlpha0,
	help2NaviAlpha1: help2NaviAlpha1,
	help2NaviAlpha2: help2NaviAlpha2,

	clickBT: clickBT,
	
	frameCheck: frameCheck,
	frame: frame
};


function init() {
	Audio.play("res/snd/birdBgm.mp3", "bg", "true");
}

init();
