#include<iostream>
#include<ctime>
using namespace std;
class People;
class Dog {
private:
    bool tail;
    int count_ears;
    int count_legs;
    bool wool;
    int age;
    double weight = 23.5;

    string name;
    string breed;
    /*string size = "big";*/
    bool is_happy;
    int hungry = 100;
    string comands[4] = { "sit", "lie", "stand", "voice" };
    string comand;

    int smart;
    int energy;
public:
    void SetSmart(int smart)
    {
        this->smart = smart;
    }
    int GetSmart() const
    {
        return smart;
    }
    void SetEnergy(int energy)
    {
        this->energy = energy;
    }
    int GetEnergy() const
    {
        return energy;
    }

    void SetComand(string comand, int width)
    {
        for (int i = 0; i < width; i++)
            if (comands[i] == comand)
                this->comand = comand;
    }
    string GetComand() const
    {
        return comand;

    }
    void SetHungry(int hungry)
    {
        this->hungry = hungry;
    }
    int GetHungry() const
    {
        return hungry;
    }
    void SetHappy(bool is_happy)
    {
        this->is_happy = is_happy;
    }
    bool GetHappy() const
    {
        return is_happy;
    }
    void SetName(string name)
    {

        this->name = name;
    }
    string GetName() const
    {
        return name;
    }

    void SetBreed(string breed)
    {

        this->breed = breed;

    }
    string GetBreed() const
    {
        return breed;
    }
    void SetWeight(double weight)
    {
        if (weight > 0 && weight < 40)
        {
            this->weight = weight;
        }
    }
    double GetWeight() const
    {
        return weight;
    }
    void SetAge(int age)
    {
        if (age > 0 && age < 16)
        {
            this->age = age;
        }
    }
    int GetAge() const
    {
        return age;
    }
    void SetWool(bool wool)
    {
        this->wool = wool;
    }
    bool GetWool() const
    {
        return wool;
    }
    void SetTail(bool tail)
    {
        this->tail = tail;
    }
    bool GetTail() const
    {
        return tail;
    }
    void SetLegs(int count_legs)
    {
        if (count_legs > 0 && count_legs < 5)
        {
            this->count_legs = count_legs;
        }
    }
    int GetLegs() const
    {
        return count_legs;
    }
    void SetEars(int count_ears)
    {
        if (count_ears > 0 && count_ears < 3)
        {
            this->count_ears = count_ears;
        }
    }
    int GetEars() const
    {
        return count_ears;
    } 
    void SayGav() const
    {
        cout << "Gav gav\n";
    }
    void Print() const
    {
        cout << "\t:" << name << ":\n";
        cout << "Age:" << age << "\n";
        cout << "Breed: " << breed << "\n";
        cout << "Energy: " << energy << "\n";
        cout << "Weight: " << weight << "\n";
        cout << "Smart: " << smart << "\n";

        cout << "Is happy?: ";
        if (is_happy == 1)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    void GetUp() const
    {
        cout << name << " gets up\n";
    }
    void Sleep()
    {
        cout << name << " is sleeping\n";
        if (energy != 100)
            energy += 20;
        else
            energy = 100;
    }

    void StudyComands(string comand)
    {
        if (energy > 30)
        {

            if (comands[0] == comand)
            {
                smart += 8;
                energy -= 10;

                cout << name << " trying study sit comand\n";
            }

            else if (comands[1] == comand)
            {
                smart += 10;
                energy -= 10;

                cout << name << " trying study lie comand\n";
            }
            else if (comands[2] == comand)
            {
                smart += 10;
                energy -= 20;

                cout << name << " trying study stand comand\n";
            }
            else if (comands[3] == comand)
            {
                smart += 20;
                energy -= 30;

                cout << name << " trying study voice comand\n";
            }
            else
            {
                cout << name << " don't know how to learn this comand\n";
            }
            is_happy = false;

        }

    }

    void Licking(string human_name)
    {
        cout << name << " lick " << human_name << "\n";
        is_happy = true;
    }

    void Eat()
    {
        cout << "dog is eating\n";
        if (energy != 100)
            energy += 20;
        else
            energy = 100;
    }

    void Drink()
    {
        cout << "dog is drinking water\n";
        if (energy != 100)
            energy += 10;
        else
            energy = 100;
    }

    void Walking()
    {
        if (energy >= 30)
        {

            cout << "Gav gav go to outside\n";

            energy -= 20;
            is_happy = true;
        }
    }
};

class People {
private:
    bool mood;
    int age;
    string name;
    double weight;
    string surname;
    string dogs_meals[6] = { "meat", "korm", "carrot", "fish", "zucchini", "porridge" };
    string meal;
    int energy;
public:
    void SetEnergy(int energy)
    {
        this->energy = energy;
    }
    int GetEnergy() const
    {
        return energy;
    }
    void SetWeight(double weight)
    {
        if (weight > 0 && weight < 268)
        {
            this->weight = weight;
        }
    }
    double GetWeight() const
    {
        return weight;
    }
    void SetName(string name)
    {
        this->name = name;
    }
    string GetName() const
    {
        return name;
    }
    void SetSurname(string surname)
    {
        this->surname = surname;
    }
    string GetSurname() const
    {
        return surname;
    }
    void SetMood(bool mood)
    {
        this->mood = mood;
    }
    bool GetMood() const
    {
        return mood;
    }
    void SetAge(int age)
    {
        if (age > 0 && age < 120)
        {
            this->age = age;
        }
    }
    int GetAge() const
    {
        return age;
    }
    void SetMeal(string dogs_meal, int width)
    {
        for (int i = 0; i < width; i++)
            if (dogs_meals[i] == dogs_meal)
                meal = dogs_meal;
    }
    string GetMeal() const
    {
        return meal;

    }
    void Print() const
    {
        cout << " :" << name << " " << surname << ":\n";
        cout << "Age:" << age << "\n";
        cout << "Weight: " << weight << "\n";
        cout << "Mood: ";
        if (mood == 1)
            cout << "good\n";
        else
            cout << "bad\n";


    }
    void GetUp() const
    {
        cout << "Good morning to you\n";
    }
    void Sleep()
    {
        if (energy == 100)
            energy = 100;
        else
            energy += 40;
        cout << "You go to bed\n";
    }
    void Eat()
    {
        if (energy == 100)
            energy = 100;
        else
            energy += 20;
        cout << "You eating \n";
    }
    void Walk(Dog& dog)
    {
        if (energy > 20)
        {

            cout << "You go walking with your friend " << dog.GetName() << "\n";

            energy -= 20;
        }
    }

    void Feed(string meal, Dog dog)
    {
        int hun = 100;
        if (energy > 10)
        {

            if (dogs_meals[0] == meal)
            {

                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                    dog.SetHungry(hun += 20);

                dog.SayGav();
                dog.SayGav();

                cout << dog.GetName() << " eating\n";
            }

            else if (dogs_meals[1] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                {
                    hun += 10;
                    dog.SetHungry(hun);
                }

                dog.SayGav();
                cout << dog.GetName() << " started eating\n";
            }
            else if (dogs_meals[2] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                {
                    hun += 1;
                    dog.SetHungry(hun);
                }

                cout << dog.GetName() << " looked at you and ate you in disgust\n";
            }
            else if (dogs_meals[3] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                {
                    hun += 8;
                    dog.SetHungry(hun);
                }

                cout << dog.GetName() << "started playing with it and ate it\n";
            }
            else if (dogs_meals[4] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                {
                    hun += 3;
                    dog.SetHungry(hun);
                }

                cout << dog.GetName() << " ate the food\n";
            }
            else if (dogs_meals[5] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                {
                    hun += 5;
                    dog.SetHungry(hun);
                }

                cout << dog.GetName() << " started beeping\n";
            }
            else
            {

                cout << dog.GetName() << " BBUUEEEE\n";
            }
            energy -= 10;
        }
    }
};

class Computer {
private:

    int version;
    double price;
    string model;

    bool mech_keyboard;
    string color;
public:
    void SetMechKeyboard(bool mech_keyboard)
    {
        this->mech_keyboard = mech_keyboard;
    }
    bool GetMechKeyboard() const
    {
        return mech_keyboard;
    }
    void SetColor(string color)
    {
        this->color = color;
    }
    string GetColor() const
    {
        return color;
    }
    void SetModel(string mmodel)
    {
        this->model = model;
    }
    string GetModel() const
    {
        return model;
    }
    void SetPrice(double price)
    {
        if (price > 0 && price < 2000000)
            this->price = price;
        else
            throw "Error";
    }
    double GetPrice() const
    {
        return price;
    }
    void SetVersion(int version)
    {
        this->version = version;
    }
    int GetVersoin() const
    {
        return version;
    }
    void Calculate(People& human)
    {
        int ener = human.GetEnergy();
        human.SetEnergy(ener -= 20);
        cout << "Computer start calculate math equation\n";
    }

    void SaveFiles() const
    {
        cout << "Files saves\n";
    }
    void DownloadGame() const
    {
        cout << "Computer almost download your game\n";
    }
    void MakeNoise(People& human)
    {
        human.SetMood(false);
        cout << "sssshhhhhhh\n";
    }

    void BreakDown(People& human)
    {
        human.SetMood(false);
        cout << "ops, computer kaput\n";
    }

    void SwitchIllumination(string color, People& human)
    {
        int ener = human.GetEnergy();
        if (human.GetEnergy() == 100)
            human.SetEnergy(100);
        else
        {
            ener += 5;
            human.SetEnergy(ener);
        }

        cout << "Illumination on keyboard\n";
        if (color == "pink")
            cout << "pink illumination\n";
        else if (color == "red")
            cout << "red illumination\n";
        else if (color == "white")
            cout << "white illumination\n";
        human.SetMood(true);

    }
};

class Juice {
private:
    int line;
    double price;
    string title;
    string taste;

    bool fresh_made;
public:
    void SetTaste(string taste)
    {
        this->taste = taste;
    }
    string GetTaste() const
    {
        return taste;
    }
    void SetFresh(bool fresh_made)
    {
        this->fresh_made = fresh_made;
    }
    bool GetFresh() const
    {
        return fresh_made;
    }
    void SetTitle(string title)
    {
        this->title = title;
    }
    string GetTitle() const
    {
        return title;
    }
    void SetPrice(double price)
    {
        if (price > 0 && price < 1000)
            this->price = price;
        else
            throw "Very expencive juice";
    }
    double GetPrice() const
    {
        return price;
    }
    void SetLine(int line)
    {
        this->line = line;
    }
    int GetLine() const
    {
        return line;
    }
    void Overstay(People& human)
    {
        human.SetMood(true);
        cout << "this bad idea\n";
    }

    void BeTasty(People& human) const
    {
        
        int energy = human.GetEnergy();
        if (energy == 100)
        {
            energy = 100;
        }
        else
        {

            human.SetMood(true);
            cout << "delicious juice\n";
            energy += 15;
            human.SetEnergy(energy);
        }
    }

    void Evaporate(People& human) const
    {
        int energy = human.GetEnergy();
        human.SetMood(false);
        energy -= 5;
        human.SetEnergy(energy);
        cout << "juice is gone\n";
    }

    void MakeBubbles(People& human) const
    {
        human.SetMood(true);
        cout << "the juice looks delicious\n";
    }

    void BitSpilled(People& human)
    {
        int ener = human.GetEnergy();
        human.SetMood(false);
        ener -= 5;
        human.SetEnergy(ener);
        cout << "I am handyman(\n";
    }
};

class Lamp {
private:
    int model;
    int line;

    double price;
    string color;
    string brand;
public:
    void SetBrand(string brand)
    {
        this->brand = brand;
    }
    string GetBrand() const
    {
        return brand;
    }
    void SetColor(string color)
    {
        this->color = color;
    }
    string GetColor() const
    {
        return color;
    }
    void SetModel(int model)
    {
        this->model = model;
    }
    int GetModel() const
    {
        return model;
    }
    void SetPrice(double price)
    {
        if (price > 0 && price < 2000)
            this->price = price;
        else
            throw "Error";
    }
    double GetPrice() const
    {
        return price;
    }
    void SetLine(int line)
    {
        this->line = line;
    }
    int GetLine() const
    {
        return line;
    }
    void TurnOn() const
    {
        cout << "light on\n";
    }

    void TurnOf() const
    {
        cout << "light off\n";
    }


    void SelectLightColor(string color, People& human) const
    {
        int energy = human.GetEnergy();
        energy += 5;
        human.SetEnergy(energy);

        human.SetMood(true);
        if (color == "pink")
            cout << "pink illumination\n";
        else if (color == "red")
            cout << "red illumination\n";
        else if (color == "white")
            cout << "white illumination\n";
    } 
    void BurnOut(People& human) const
    {
        human.SetMood(false);

        cout << "lamp burn out\n";
    }

    void BlowUp(People& human)
    {
        human.SetMood(false);
        int ener = human.GetEnergy();
        ener += 5;
        human.SetEnergy(ener);
        cout << "ops, bad lamp blew up\n";
    }
};

class Kino {
private:
    double score;
    int count_coments;
    string appellation;
    string genre;
    string topic;

public:
    void SetTopic(string topic)
    {
        this->topic = topic;
    }
    string GetTopic() const
    {
        return topic;
    }
    void SetGenre(string genre)
    {
        this->genre = genre;
    }
    string GetGenre() const
    {
        return genre;
    }
    void SetAppellation(string appellation)
    {
        this->appellation = appellation;
    }
    string GetAppellation() const
    {
        return appellation;
    }
    void SetCountComents(int count_coments)
    {
        this->count_coments = count_coments;
    }
    int GetCountComents() const
    {
        return count_coments;
    }
    void SetScore(double score)
    {
        this->score = score;
    }
    double GetScore() const
    {
        return score;
    }
    void MovieEntrance(People& human)
    {
        human.SetMood(false);
        cout << "date when we can see movie\n";
    }

    void RackBrain(People& human)
    {
        int ener = human.GetEnergy();
        if (ener != 100)
        {

            cout << "Film is difficult to brain\n";
            ener -= 15;
            human.SetEnergy(ener);
        }
        else
        {

            ener = 100;
            human.SetEnergy(ener);
        }

    }

    void TellAdvertisement() const
    {
        cout << "Intresting film\n";
    }

    void EducatePeople(People& human)
    {
        int ener = human.GetEnergy();
        if (ener != 100)
        {

            cout << "Films about history\n";
            ener -= 10;
            human.SetEnergy(ener);
        }
        else
        {

            ener = 100;
            human.SetEnergy(ener);
        }

    }

    void UpliftMood(People& human) const
    {
        human.SetMood(true);
        cout << "Up lift your mood\n";
    }
};

int main()
{
    srand(time(0));
    People h;
    Dog d;
    Computer c;
    Kino k;
    Lamp l;
    Juice j;
    k.SetGenre("Detective");
    string comand;
    string meal;
    string nick;
    string breed;
    string name;
    string surname;
    int age_human;
    int age_dog;

    d.SetSmart(0);
    h.SetEnergy(100);
    d.SetEnergy(100);
    cout << "What is your name?\n";
    cin >> name;
    h.SetName(name);
    cout << "What is your surname?\n";
    cin >> surname;
    h.SetSurname(surname);
    cout << "How old are you - ";
    cin >> age_human;
    h.SetAge(age_human);
    l.SetColor("white");

    d.SetLegs(4);
    d.SetEars(2);
    h.SetWeight(68.6);

    cout << "Name of your dog - ";
    cin >> nick;
    d.SetName(nick);
    d.GetName();

    cout << "Age your dog - ";
    cin >> age_dog;
    d.SetAge(age_dog);
    d.GetAge();
    cout << "Breed of your dog - ";
    cin >> breed;
    d.SetBreed(breed);
    d.GetBreed();



    h.GetUp();
    d.GetUp();
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Drink();
    h.Walk(d);
    d.SayGav();
    cout << "What comand you want to study your dog?\n";
    cin >> comand;
    d.StudyComands(comand);
    l.TurnOn();
    l.SelectLightColor("pink", h);
    c.Calculate(h);
    c.DownloadGame();
    l.BurnOut(h);
    d.SayGav();
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Drink();
    d.Licking(h.GetName());
    cout << "What comand you want to study your dog?\n";
    cin >> comand;
    d.StudyComands(comand);
    d.Sleep();
    k.MovieEntrance(h);
    j.BeTasty(h);
    d.GetUp();
    d.Walking();
    k.TellAdvertisement();
    k.EducatePeople(h);
    d.SayGav();
    k.RackBrain(h);
    k.UpliftMood(h);
    d.SayGav();
    j.BitSpilled(h);
    c.MakeNoise(h);
    c.BreakDown(h);
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Sleep();
    h.Sleep();

    d.Print();
    h.Print();
}