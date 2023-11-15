// Решите загадку: Сколько чисел от 1 до 1000 содержат как минимум одну цифру 3?
// Напишите ответ здесь:

// Закомитьте изменения и отправьте их в свой репозиторий.

#include <vector>
#include<algorithm>
#include <iostream>
#include <string>
// Р РµС€РёС‚Рµ Р·Р°РіР°РґРєСѓ: РЎРєРѕР»СЊРєРѕ С‡РёСЃРµР» РѕС‚ 1 РґРѕ 1000 СЃРѕРґРµСЂР¶Р°С‚ РєР°Рє РјРёРЅРёРјСѓРј РѕРґРЅСѓ С†РёС„СЂСѓ 3? 

// РќР°РїРёС€РёС‚Рµ РѕС‚РІРµС‚ Р·РґРµСЃСЊ: 



// Р—Р°РєРѕРјРёС‚СЊС‚Рµ РёР·РјРµРЅРµРЅРёСЏ Рё РѕС‚РїСЂР°РІСЊС‚Рµ РёС… РІ СЃРІРѕР№ СЂРµРїРѕР·РёС‚РѕСЂРёР№. 

int main()
{
    size_t  count3;
    std::vector<int> digits;

    for (int i = 0; i <= 1000; i++)
        digits.push_back(i);
    count3 = count_if(digits.begin(), digits.end(), [](const auto& item) {
        return std::to_string(item).find('3') != std::string::npos;
    });

    std::cout << count3 << std::endl;
}
