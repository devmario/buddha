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
 * storage
 */

var storage = require('FuseJS/Storage');

var data = {
	"speed":5,
	"continue":false,
	"voice":{"index":0,"volume":5},
	"bg":{"index":0,"volume":5},
	"save":[]
};

function saveData() {
 	var wasWritten = storage.writeSync("data.json", JSON.stringify(data));
	if(wasWritten) {
		console.log("saved data.json");
		console.log(JSON.stringify(data, null, 2));
	} else {
		console.log("not saved data.json");
	}
}

function loadData() {
	var content = storage.readSync("data.json");
	if(content == "") {
		content = JSON.stringify(data);
		console.log("not found data.json");
		var wasWritten = storage.writeSync("data.json", content);
		if(!wasWritten) {
			console.log("not wasWritten data.json");
		} else {
			console.log("writeSync data.json");
		}
	} else {
		console.log("load data.json: " + content);
	}
	data = JSON.parse(content);
	console.log("parse json data.json");
}

loadData();

var alphaVoiceMan = Observable(1.0);
var alphaVoiceGirl = Observable(1.0);
var alphaVoiceDubbing = Observable(1.0);

var alphaStartContinue = Observable(1.0);
var alphaStartFirst = Observable(1.0);

var alphaBgBird = Observable(1.0);
var alphaBgBug = Observable(1.0);
var alphaBgWater = Observable(1.0);
var alphaBgMusic = Observable(1.0);

var textSpeed = Observable("");
var textVoice = Observable("");
var textBg = Observable("");

function configUpdate() {
	saveData();
	var voiceIndex = data["voice"]["index"];
	var bgIndex = data["bg"]["index"];
	var voiceArr = [alphaVoiceMan, alphaVoiceGirl, alphaVoiceDubbing];
	var bgArr = [alphaBgBird, alphaBgBug, alphaBgWater, alphaBgMusic];
	for(var i in voiceArr) {
		voiceArr[i].value = 0.5;
	}
	for(var i in bgArr) {
		bgArr[i].value = 0.5;
	}
	voiceArr[voiceIndex].value = 1.0;
	bgArr[bgIndex].value = 1.0;
	textVoice.value = data["voice"]["volume"].toString();
	textBg.value = data["bg"]["volume"].toString();
	textSpeed.value = data["speed"].toString();
	alphaStartContinue.value = data["continue"] ? 1.0 : 0.5;
	alphaStartFirst.value = data["continue"] ? 0.5 : 1.0;
}

function activateConfig(arg) {
	console.log("activateConfig");
	configUpdate();
}

function speedDown(arg) {
	console.log("speed Down");
	if(data["speed"] > 0) {
		data["speed"] = data["speed"] - 1;
	}
	configUpdate();
}

function speedUp(arg) {
	console.log("speed up");
	if(data["speed"] < 5) {
		data["speed"] = data["speed"] + 1;
	}
	configUpdate();
}

function startFirst(arg) {
	console.log("start first");
	data["continue"] = false;
	configUpdate();
}

function startContinue(arg) {
	console.log("start continue");
	data["continue"] = true;
	configUpdate();
}

function voiceMan(arg) {
	console.log("voice man");
	data["voice"]["index"] = 0;
	configUpdate();
}

function voiceGirl(arg) {
	console.log("voice girl");
	data["voice"]["index"] = 1;
	configUpdate();
}

function voiceDubbing(arg) {
	console.log("voice dubbing");
	data["voice"]["index"] = 2;
	configUpdate();
}

function voiceUp(arg) {
	console.log("voice up");
	if(data["voice"]["volume"] < 5) {
		data["voice"]["volume"] = data["voice"]["volume"] + 1;
	}
	configUpdate();
}

function voiceDown(arg) {
	console.log("voice down");
	if(data["voice"]["volume"] > 0) {
		data["voice"]["volume"] = data["voice"]["volume"] - 1;
	}
	configUpdate();
}

function bgBird(arg) {
	console.log("bg bird");
	data["bg"]["index"] = 0;
	configUpdate();
}

function bgBug(arg) {
	console.log("bg bug");
	data["bg"]["index"] = 1;
	configUpdate();
}

function bgWater(arg) {
	console.log("bg water");
	data["bg"]["index"] = 2;
	configUpdate();
}

function bgMusic(arg) {
	console.log("bg music");
	data["bg"]["index"] = 3;
	configUpdate();
}

function bgUp(arg) {
	console.log("bg up");
	if(data["bg"]["volume"] < 5) {
		data["bg"]["volume"] = data["bg"]["volume"] + 1;
	}
	configUpdate();
}

function bgDown(arg) {
	console.log("bg down");
	if(data["bg"]["volume"] > 0) {
		data["bg"]["volume"] = data["bg"]["volume"] - 1;
	}
	configUpdate();
}

function deleteSavedList(arg) {
	console.log("delete saved list");
	data["save"] = [];
	configUpdate();
}

/*
//test code
data.speed = 4;
saveData();
*/

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
	frame: frame,

	alphaBgBug: alphaBgBug,
	alphaBgBird: alphaBgBird,
	alphaBgWater: alphaBgWater,
	alphaBgMusic: alphaBgMusic,

	alphaVoiceMan: alphaVoiceMan,
	alphaVoiceDubbing: alphaVoiceDubbing,
	alphaVoiceGirl: alphaVoiceGirl,

	alphaStartContinue: alphaStartContinue,
	alphaStartFirst: alphaStartFirst,

	textSpeed: textSpeed,
	textBg: textBg,
	textVoice: textVoice,
	
	activateConfig: activateConfig,
	
	speedUp: speedUp,
	speedDown: speedDown,
	
	startFirst: startFirst,
	startContinue: startContinue,
	
	voiceMan: voiceMan,
	voiceGirl: voiceGirl,
	voiceDubbing: voiceDubbing,
	
	voiceUp: voiceUp,
	voiceDown: voiceDown,

	bgBug: bgBug,
	bgWater: bgWater,
	bgBird: bgBird,
	bgMusic: bgMusic,

	bgUp: bgUp,
	bgDown: bgDown,

	deleteSavedList: deleteSavedList
};

/*
 * Audio Init(background music start)
 */


function init() {
	Audio.play("res/snd/birdBgm.mp3", "bg", "true");
}

init();
