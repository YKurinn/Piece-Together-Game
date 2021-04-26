#ifndef _CHARACTERA_H
#define _CHARACTERA_H

#include "Character.h"


class CharacterA : public Character {
private:
	static CharacterA* chara;//������Ա
	
public:
	static CharacterA* create(const std::string& filename);//��������
	
	static CharacterA* getChara();//��ȡ����

	virtual void runSkill()override;

	virtual void endSkill()override;

	virtual void firstInitialize();

	virtual void saveData()override;

	virtual void loadData()override;

	virtual void groan();

};

#endif // !_CHARACTERA_H
