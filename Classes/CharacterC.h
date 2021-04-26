#ifndef _CHARACTERC_H
#define _CHARACTERC_H

#include "Character.h"

class CharacterC : public Character {
private:
	static CharacterC* chara;//������Ա
public:
	static CharacterC* create(const std::string& filename);//��������

	static CharacterC* getChara();//��ȡ����

	virtual void runSkill()override;

	virtual void endSkill()override;

	virtual void firstInitialize();

	virtual void saveData()override;

	virtual void loadData()override;

	virtual void groan();

};

#endif // !_CHARACTERC_H
