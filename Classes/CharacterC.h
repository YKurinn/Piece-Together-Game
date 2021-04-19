#ifndef _CHARACTERC_H
#define _CHARACTERC_H

#include "Character.h"


class CharacterC : public Character {
private:
	static CharacterC* chara;//������Ա
	static CharacterC* create(const std::string& filename);//��������˽�л�
public:
	static CharacterC* getChara();//��ȡ����

	virtual void runSkill()override;

	virtual void endSkill()override;

	virtual void firstInitialize();

	virtual void saveData()override;

	virtual void loadData()override;
};

#endif // !_CHARACTERC_H
