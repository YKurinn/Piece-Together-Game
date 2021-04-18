#ifndef _CHARACTER_H
#define _CHARACTER_H

#include "cocos2d.h"
#include "Weapon.h"


USING_NS_CC;


class Character : public Sprite {
	public:
		std::string name;
		int level;
		bool ownership;
		//health
		double levelZeroHealth;
		double maxHealth;
		double currentHealth;
		double levelUpIncreaseHealth;
		//damage
		double levelZeroDamage;
		double basicDamage;
		double currentDamage;
		double levelUpIncreaseDamage;
		//defence
		double levelZeroDefence;
		double basicDefence;
		double currentDefence;
		double levelUpIncreaseDefence;
		//speed
		double levelZeroSpeed;
		double basicSpeed;
		double currentSpeed;
		double levelUpIncreaseSpeed;
		//anger
		double maxAnger = 50;
		double currentAnger = 0;
		Weapon* weapon;

		void attack(Character* chara);

		//�������ʵ�ֵĳ�����
		virtual void runSkill() = 0;

		virtual void endSkill() = 0;
		
		virtual void saveData() = 0;//�洢�浵ʱ����

		virtual void loadData() = 0;//��ȡ�浵ʱ����

		virtual void firstInitialize();//ֻ������Ϸ��һ������ʱ����

		virtual void refresh();//���ݵȼ����½�ɫ״̬

		void equipWeapon(Weapon* weapon);

		void removeWeapon();
};


#endif // !_CHARACTER_H
