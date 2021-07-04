//
// Created by Nelson Amerei on 7/4/21.
//

#include "Karen.hpp"
int getIndex(std::string level)
{
	if (level == "DEBUG")
		return 1;
	if (level == "INFO")
		return 2;
	if (level == "WARNING")
		return 3;
	if (level == "ERROR")
		return 4;
	return 0;
}

Karen::Karen() {}

void Karen::debug(void) {
	std::cout << THICK"Я люблю получать больше бекона для моего бургера 7XL-двойной-сыр-тройной-соленый-специальный-кетчуп. Я просто люблю это!"RESET << std::endl;
}
void Karen::info(void) {
	std::cout << THICK "Не могу поверить, что добавление лишнего бекона стоит больших денег."
				 "«Вы не положили достаточно! Если бы вы это сделали, мне бы не пришлось спрашивать»"
				 "\"для этого!"RESET << std::endl;
}
void Karen::warning(void) {
	std::cout << PULSE THICK"Я много лет приезжаю сюда, а вы только начали здесь работать в прошлом месяце!"RESET << std::endl;
}
void Karen::error(void) {
	std::cout << THICK"Это недопустимо, я хочу поговорить с менеджером сейчас!"RESET << std::endl;
}

void Karen::complain(std::string level) {
	std::cout << MSG"[ " << level << " ]"RESET << std::endl;
	switch (getIndex(level))
	{
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
			error();
			break;
		default:
			std::cout << CYN"Incorrect argument!...shh..shh.. Try \"DEBUG\" \"INFO\" \"WARNING\" or \"ERROR\"." RESET << std::endl;
			break;
	}
}
