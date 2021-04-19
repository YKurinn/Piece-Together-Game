#ifndef _CHARACTERD_H
#define _CHARACTERD_H

#include "Character.h"


class CharacterD : public Character {
private:
	static CharacterD* chara;//������Ա
	static CharacterD* create(const std::string& filename);//��������˽�л�
public:
	static CharacterD* getChara();//��ȡ����

	virtual void runSkill()override;

	virtual void endSkill()override;

	virtual void firstInitialize();

	virtual void saveData()override;

	virtual void loadData()override;
};

#endif // !_CHARACTERD_H
