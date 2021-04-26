#ifndef _CHARACTERD_H
#define _CHARACTERD_H

#include "Character.h"

class CharacterD : public Character {
private:
	static CharacterD* chara;//������Ա
	
public:
	static CharacterD* create(const std::string& filename);//��������

	static CharacterD* getChara();//��ȡ����

	virtual void runSkill()override;

	virtual void endSkill()override;

	virtual void firstInitialize();

	virtual void saveData()override;

	virtual void loadData()override;

	virtual void groan();

};

#endif // !_CHARACTERD_H
