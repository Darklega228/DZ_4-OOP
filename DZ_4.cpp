#include <iostream>
using namespace std;

class Desklamp {
    string Color;
    string Brand;
    double weight;
    double width;
    double height;
    int Brightness;
    bool IsOn = true;
    bool IsWork = true;
public:
    void On() {
        if (IsOn) {
            cout << "Лампа уже включена";
            return;
        }
        cout << "Лампа включается";
    }

    void Off() {
        if (IsOn) {
            cout << "Лампа уже выклчена";
            return;
        }
        cout << "Лампа выключается";
        IsOn = false;
    }

    void straighten() {
        if (width > 2) {
            cout << "Лампа уже выпмрялена";
            return;
        }
        cout << "Выпрямляем Лампу";
    }

    void compress() {
        if (width < 2) {
            cout << "Лампа уже сжата";
            return;
        }
        cout << "Сжимаем Лампу";
    }

    void Lampochka() {
        if (IsWork) {
            cout << "Она работает";
            return;
        }
        cout << "Лампа не работает";
        IsWork = false;
    }

    void SetColor(string Color) {
        this->Color = Color;
    }
    void SetBrand(string Brand) {
        this->Brand = Brand;
    }
    void SetBrightness(int Brightness) {
        if (Brightness >= 0 && Brightness <= 10)
        {
            this->Brightness = Brightness;
        }
        else
        {
            this->Brightness = 4;
        }
    }
    void SetWeight(double weight) {
        if (weight > 0 && weight <= 10) {
            this->weight = weight;
        }
        else {
            this->weight = 5;
        }
    }
    void SetWidth(double width) {
        if (width > 0 && width <= 2) {
            this->width = width;
        }
        else {
            this->width = 2;
        }
    }
    void SetHeight(double height) {
        if (height > 0 && height <= 40) {
            this->height = height;
        }
        else {
            this->height = 30;
        }
    }

    string GetColor() const {
        return Color;
    }
    string GetBrand() const {
        return Brand;
    }
    int GetBrightness() const {
        return Brightness;
    }
    double GetWeight() const {
        return weight;
    }
    double GetWidth() const {
        return width;
    }
    double GetHeight() const {
        return height;
    }
    bool IsItOn() const {
        return IsOn;
    }
    bool IsItWork() const {
        return IsWork;
    }
    void About() const {
        cout << "Цвет Лампы " << Color << "\n";
        cout << "Бренд Лампы " << Brand << "\n";
        cout << "Яркость: " << Brightness << "\n";
        cout << "Вес: " << weight << "кг" << "\n";
        cout << "Длина: " << width << "м" << "\n";
        cout << "Высота: " << height << "м" << "\n";
        cout << "Включен: ";
        if (IsOn) {
            cout << "ДА!" << "\n";
        }
        else {
            cout << "НЕТ" << "\n";
        }
        cout << "Работает: ";
        if (IsWork) {
            cout << "ДА!" << "\n\n";
        }
        else {
            cout << "НЕТ" << "\n\n";
        }
    }
};

class Laptop {

    string ColorNout;
    string BrandNout;
    double weightNout;
    double heightNout;
    int hertz;
    bool IsOnNout = true;
    bool Error = true;
    bool WorkSound = false;
public:
    void On() {
        if (IsOnNout) {
            cout << "Ноутбук уже включена";
            return;
        }
        cout << "Ноутбук включается";
    }

    void Off() {
        if (IsOnNout) {
            cout << "Ноутбук уже выклчена";
            return;
        }
        cout << "Ноутбук выключается";
        IsOnNout = false;
    }

    void Bluescreen() {
        if (Error) {
            cout << "Исправте Ошибку чтоб заработал";
            return;
        }
        cout << "У вас Экран Смерти";
    }

    void Quiet() {
        if (WorkSound) {
            cout << "У вас все ещё работает тихо";
            return;
        }
        cout << "У вас работает тихо";
    }

    void Noisy() {
        if (WorkSound) {
            cout << "У вас все ещё работает громко";
            return;
        }
        cout << "У вас работает громко";
        WorkSound = false;
    }

    void SetColor(string ColorNout) {
        this->ColorNout = ColorNout;
    }
    void SetBrand(string BrandNout) {
        this->BrandNout = BrandNout;
    }
    void SetHertz(int hertz) {
        if (hertz >= 0 && hertz <= 10)
        {
            this->hertz = hertz;
        }
        else
        {
            this->hertz = 4;
        }
    }
    void SetWeight(double weightNout) {
        if (weightNout > 0 && weightNout <= 10) {
            this->weightNout = weightNout;
        }
        else {
            this->weightNout = 5;
        }
    }
    void SetHeight(double heightNout) {
        if (heightNout > 0 && heightNout <= 40) {
            this->heightNout = heightNout;
        }
        else {
            this->heightNout = 30;
        }
    }

    string GetColor() const {
        return ColorNout;
    }
    string GetBrand() const {
        return BrandNout;
    }
    int GetHertz() const {
        return hertz;
    }
    double GetWeight() const {
        return weightNout;
    }
    double GetHeight() const {
        return heightNout;
    }
    bool IsItOn() const {
        return IsOnNout;
    }
    bool IsError() const {
        return Error;
    }
    bool IsWorkSound() const {
        return WorkSound;
    }
    void About() const {
        cout << "Цвет Ноутбука " << ColorNout << "\n";
        cout << "Бренд Ноутбука " << BrandNout << "\n";
        cout << "Герц " << hertz << "\n";
        cout << "Вес: " << weightNout << "кг" << "\n";
        cout << "Высота: " << heightNout << "м" << "\n";
        cout << "Включен: ";
        if (IsOnNout) {
            cout << "ДА!" << "\n";
        }
        else {
            cout << "НЕТ" << "\n";
        }
        cout << "Работает: ";
        if (Error) {
            cout << "ДА!" << "\n";
        }
        else {
            cout << "НЕТ" << "\n";
        }
        cout << "Громкость: ";
        if (WorkSound) {
            cout << "тихо" << "\n\n";
        }
        else {
            cout << "ГРОМКО" << "\n\n";
        }
    }
};

class Flashlight {

    string ColorFlash;
    string BrandFlash;
    double weightFlash;
    double heightFlash;
    int distance;
    bool IsOnFlash = true;
    bool Battery = true;
    bool Migaet = false;
public:
    void On() {
        if (IsOnFlash) {
            cout << "Фонарик уже включена";
            return;
        }
        cout << "Фонарик включается";
    }
    void Off() {
        if (IsOnFlash) {
            cout << "Фонарик уже выключена";
            return;
        }
        cout << "Фонарик выключается";
        IsOnFlash = false;
    }
    void BatteryHave() {
        if (Battery) {
            cout << "Батарейка уже присутствоет";
            return;
        }
        cout << "Батарейка присутствоет";
    }
    void BatteryDontHave() {
        if (Battery) {
            cout << "Батарейки итак не присутствоет";
            return;
        }
        cout << "Батарейки нету";
        Battery = false;
    }
    void IsMigaet() {
        if (Migaet) {
            cout << "Фонарик уже мигает";
            return;
        }
        cout << "Фонарик мигает";
    }

    void SetColor(string ColorFlash) {
        this->ColorFlash = ColorFlash;
    }
    void SetBrand(string BrandFlash) {
        this->BrandFlash = BrandFlash;
    }
    void SetHertz(int distance) {
        if (distance >= 0 && distance <= 10)
        {
            this->distance = distance;
        }
        else
        {
            this->distance = 4;
        }
    }
    void SetWeight(double weightFlash) {
        if (weightFlash > 0 && weightFlash <= 10) {
            this->weightFlash = weightFlash;
        }
        else {
            this->weightFlash = 0.5;
        }
    }
    void SetHeight(double heightFlash) {
        if (heightFlash > 0 && heightFlash <= 40) {
            this->heightFlash = heightFlash;
        }
        else {
            this->heightFlash = 15;
        }
    }

    string GetColor() const {
        return ColorFlash;
    }
    string GetBrand() const {
        return BrandFlash;
    }
    int GetDistance() const {
        return distance;
    }
    double GetWeight() const {
        return weightFlash;
    }
    double GetHeight() const {
        return heightFlash;
    }
    bool IsItOn() const {
        return IsOnFlash;
    }
    bool IsBattery() const {
        return Battery;
    }
    bool IsMigaet() const {
        return Migaet;
    }
    void About() const {
        cout << "Цвет Фонаря " << ColorFlash << "\n";
        cout << "Бренд Фонаря " << BrandFlash << "\n";
        cout << "Дистанция: " << distance << "\n";
        cout << "Вес: " << weightFlash << "кг" << "\n";
        cout << "Высота: " << heightFlash << "см" << "\n";
        cout << "Включен: ";
        if (IsOnFlash) {
            cout << "ДА!" << "\n";
        }
        else {
            cout << "НЕТ" << "\n";
        }
        cout << "Мигает: ";
        if (Migaet) {
            cout << "ДА!" << "\n";
        }
        else {
            cout << "НЕТ" << "\n";
        }
        cout << "Батарея: ";
        if (Battery) {
            cout << "присутствоет" << "\n\n";
        }
        else {
            cout << "не присутствоет" << "\n\n";
        }
    }
};

class Ps3 {
public:
    string ColorPs3;
    string Model;
    double weightPs3;
    double heightPs3;
    int games;
    bool IsOnPs3 = true;
    bool MGS3SE = false;
    bool TM = false;
    bool PVZ = false;

    void On() {
        if (IsOnPs3) {
            cout << "Пс3 уже включена";
            return;
        }
        cout << "Пс3 включается";
    }
    void Off() {
        if (IsOnPs3) {
            cout << "Пс3 уже выключена";
            return;
        }
        cout << "Пс3 выключается";
        IsOnPs3 = false;
    }
    void MGS3() {
        if (MGS3SE) {
            cout << "Пс3 уже включает МГС3";
            return;
        }
        cout << "Пс3 включает МГС3";
    }
    void TwistedMetal() {
        if (TM) {
            cout << "Пс3 уже включает Твистед Метал";
            return;
        }
        cout << "Пс3 включает Твистед Метал";
    }
    void PLANTSVSZOMBIE() {
        if (PVZ) {
            cout << "Пс3 уже включает Растение против Зомби";
            return;
        }
        cout << "Пс3 включает Растение против Зомби";
    }

    void SetColor(string ColorPs3) {
        this->ColorPs3 = ColorPs3;
    }
    void SetModel(string Model) {
        this->Model = Model;
    }
    void SetGames(int games) {
        if (games >= 0 && games <= 10)
        {
            this->games = games;
        }
        else
        {
            this->games = 3;
        }
    }
    void SetWeight(double weightPs3) {
        if (weightPs3 > 0 && weightPs3 <= 10) {
            this->weightPs3 = weightPs3;
        }
        else {
            this->weightPs3 = 2;
        }
    }
    void SetHeight(double heightPs3) {
        if (heightPs3 > 0 && heightPs3 <= 40) {
            this->heightPs3 = heightPs3;
        }
        else {
            this->heightPs3 = 0.2;
        }
    }

    string GetColor() const {
        return ColorPs3;
    }
    string GetBrand() const {
        return Model;
    }
    int GetDistance() const {
        return games;
    }
    double GetWeight() const {
        return weightPs3;
    }
    double GetHeight() const {
        return heightPs3;
    }
    bool IsItOn() const {
        return IsOnPs3;
    }
    bool IsMGS3() const {
        return MGS3SE;
    }
    bool IsTM() const {
        return TM;
    }
    bool IsPVZ() const {
        return PVZ;
    }
    void About() const {
        cout << "Цвет Пс3 " << ColorPs3 << "\n";
        cout << "Модель Пс3 " << Model << "\n";
        cout << "Игры: " << games << "\n";
        cout << "Вес: " << weightPs3 << "кг" << "\n";
        cout << "Высота: " << heightPs3 << "см" << "\n";
        cout << "Включен: ";
        if (IsOnPs3) {
            cout << "ДА!" << "\n";
        }
        else {
            cout << "НЕТ" << "\n";
        }
        cout << "Включается Мгс3 ";
        if (MGS3SE) {
            cout << "ДА!" << "\n";
        }
        else {
            cout << "НЕТ" << "\n";
        }
        cout << "Включается Твистед Метал: ";
        if (TM) {
            cout << "ДА!" << "\n";
        }
        else {
            cout << "НЕТ" << "\n";
        }
        cout << "Включается Растения против Зомби: ";
        if (PVZ) {
            cout << "ДА!" << "\n\n";
        }
        else {
            cout << "НЕТ" << "\n\n";
        }
    }
};

class GrannyGame {
public:
    string Name;
    string placeofresidence;
    double weightG;
    double heightG;
    int years;
    bool Move = false;
    bool IsHit = false;
    bool IsKill = false;

    void Idle() {
        if (Move) {
            cout << "Бабка уже стоит";
            return;
        }
        cout << "Бабка Стоит";
    }
    void Walk() {
        if (Move) {
            cout << "Бабка уже идёт";
            return;
        }
        cout << "Бабка идёт";
        Move = true;
    }
    void Hit() {
        if (IsHit) {
            cout << "Бабка уже Бьет тебя";
            return;
        }
        cout << "Бабка Бьет тебя";
        IsHit = true;
    }
    void Kill() {
        if (IsKill) {
            cout << "Бабка уже убила тебя";
            return;
        }
        cout << "Бабка убила тебя";
        IsKill = true;
    }
    void Eat() {
        if (IsKill) {
            cout << "Бабка уже сьела тебя";
            return;
        }
        cout << "Бабка сьела тебя";
    }

    void SetName(string Name) {
        this->Name = Name;
    }
    void SetPlaceofresidence(string placeofresidence) {
        this->placeofresidence = placeofresidence;
    }
    void SetYears(int years) {
        if (years >= 0 && years <= 100)
        {
            this->years = years;
        }
        else
        {
            this->years = 70;
        }
    }
    void SetWeight(double weightG) {
        if (weightG > 0 && weightG <= 10) {
            this->weightG = weightG;
        }
        else {
            this->weightG = 50;
        }
    }
    void SetHeight(double heightG) {
        if (heightG > 0 && heightG <= 250) {
            this->heightG = heightG;
        }
        else {
            this->heightG = 168;
        }
    }

    string GetName() const {
        return Name;
    }
    string GetPlaceofresidence() const {
        return placeofresidence;
    }
    int GetYears() const {
        return years;
    }
    double GetWeight() const {
        return weightG;
    }
    double GetHeight() const {
        return heightG;
    }
    bool IsMove() const {
        return Move;
    }
    bool IsItHit() const {
        return IsHit;
    }
    bool IsItKill() const {
        return IsKill;
    }
    void About() const {
        cout << "Имя Бабки " << Name << "\n";
        cout << "Место проживание " << placeofresidence << "\n";
        cout << "Возраст: " << years << "\n";
        cout << "Вес: " << weightG << "кг" << "\n";
        cout << "Высота: " << heightG << "м" << "\n";
        cout << "Ходит бабка: ";
        if (Move) {
            cout << "ДА!" << "\n";
        }
        else {
            cout << "НЕТ" << "\n";
        }
        cout << "Бьет бабка: ";
        if (IsHit) {
            cout << "ДА!" << "\n";
        }
        else {
            cout << "НЕТ" << "\n";
        }
        cout << "Убила бабка: ";
        if (IsKill) {
            cout << "ДА!" << "\n\n";
        }
        else {
            cout << "НЕТ" << "\n\n";
        }
    }
};

int main()
{
    setlocale(0, "");
    Desklamp desklamp;
    desklamp.SetColor("black");
    desklamp.SetBrand("Philips");
    desklamp.About();

    Laptop laptop;
    laptop.SetColor("gray");
    laptop.SetBrand("hp");
    laptop.About();

    Flashlight flashlight;
    flashlight.SetColor("yellow");
    flashlight.SetColor("Yajia");
    flashlight.About();

    Ps3 ps3;
    ps3.SetColor("black");
    ps3.SetModel("Slim");
    ps3.About();


    GrannyGame granny;
    granny.SetName("Zina");
    granny.SetPlaceofresidence("house in the middle of the forestе");
    granny.About();
}
