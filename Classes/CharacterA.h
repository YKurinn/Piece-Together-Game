#ifndef _CHARACTERA_H
#define _CHARACTERA_H

#include "Character.h"


class CharacterA : public Character {
private:
	static CharacterA* chara;//������Ա
	static CharacterA* create(const std::string& filename);//��������˽�л�
public:
	static CharacterA* getChara();//��ȡ����

	virtual void runSkill();

	virtual void endSkill();

	virtual void firstInitialize();

	virtual void saveData();

	virtual void loadData();
};



















#endif // !_CHARACTERA_H
