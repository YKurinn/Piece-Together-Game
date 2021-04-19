#ifndef _CHARACTERA_H
#define _CHARACTERA_H

#include "Character.h"


class CharacterA : public Character {
private:
	static CharacterA* chara;//������Ա
	static CharacterA* create(const std::string& filename);//��������˽�л�
public:
	static CharacterA* getChara();//��ȡ����

	virtual void runSkill()override;

	virtual void endSkill()override;

	virtual void firstInitialize();

	virtual void saveData()override;

	virtual void loadData()override;
};

#endif // !_CHARACTERA_H
