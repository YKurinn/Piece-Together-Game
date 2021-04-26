#include "SceneInitialization.h"


USING_NS_CC;
using namespace CocosDenshion;

Scene* SceneInitialization::createScene() {
	Scene *scene = Scene::create();
	auto layer = SceneInitialization::create();
	scene->addChild(layer);
	return scene;
}
bool SceneInitialization::init() {
	if (!Scene::init()) {
		return false;
	}


	//�л����˵�����
	this->scheduleOnce(schedule_selector(SceneInitialization::changeScene), 0.05f);

	//������Ϸʱ�ĳ�ʼ��
	GlobalInstanceClass::loadAll();

		GlobalInstanceClass::isGameSaved = UserDefault::sharedUserDefault()->getBoolForKey("isGameSaved");
	if (!GlobalInstanceClass::isGameSaved) {
		GlobalInstanceClass::createAllGlobalInstance();
		GlobalInstanceClass::firstInitializeAll();
		GlobalInstanceClass::saveAll();
		UserDefault::sharedUserDefault()->setBoolForKey("isGameSaved", true);
	}

	//����BGM
	GlobalInstanceClass::playMusic("03.mp3");

	return true;
}
void SceneInitialization::changeScene(float dt) {
	auto sceneMenu = SceneMenu::create();
	Director::getInstance()->replaceScene(sceneMenu);
}