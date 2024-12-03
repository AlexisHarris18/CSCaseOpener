#include <iostream>
#include <string>
#include <random>
#include <iomanip>
#include <ctime>

using namespace std;

//DREAMS AND NIGHTMARES CASE

class openDreams {
public:
        double rarity;
        double Float;
        string weapon;
        bool statTrak;
        int pattern;
        double totalSpent;

    openDreams() : rarity(0), Float(0), weapon(""), statTrak(false), pattern(0), totalSpent(0.00){}
   

    double assignRarity() {
        //double rarity = ((float)rand() / (float)RAND_MAX) * 100;  was trying to use rand() but kept getting very similar numbers, had to do some research to find what's below
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00,100.00);

        double rarity = dist(gen);
        
        if (rarity <= 0.26) {
            cout << "Gold!\n";
            
        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            cout << "Covert!\n";
          

        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            cout << "Classified!\n";
            
        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            cout << "Restricted!\n";
           
        }
        else if (rarity <= 100 && rarity > 20.08) {
            cout << "Mil-Spec!\n";
            
        }

        cout << fixed << showpoint;
        cout << setprecision(2);
        return rarity;
    };

    void assignFloat() {

        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00000000000000, 1.00000000000000);
        double Float = dist(gen);

        if (Float >= 0.45000000000000) {
            cout << "Battle-Scarred\n";
        }
        else if (Float < 0.45000000000000 && Float >= 0.38000000000000) {
            cout << "Well-Worn\n";
        }
        else if (Float < 0.38000000000000 && Float >= 0.15000000000000) {
            cout << "Field-Tested\n";
        }
        else if (Float < 0.15000000000000 && Float >= 0.07000000000000) {
            cout << "Minimal Wear\n";
        }
        else if (Float < 0.07 && Float >= 0) {
            cout << "Factory New\n";
        }

        cout << fixed << showpoint;
        cout << setprecision(13);
        cout << "Float:" <<  Float << "\n";
    }

    void assignWeapon(double rarity) {

        vector<string> milSpecList = {
            "Sawed off - Spirit Board", "P2000 - Lifted Spirits", "MAG-7 - Foresight", "MP5-SD - Necro Jr.", "SCAR-20 - Poultrygeist", "MAC-10 - Ensnared", "Five-SeveN - Scrawl"
        };
        vector<string> restrictedList = {
            "G3SG1 - Dream Glade", "XM1014 - Zombie Offensive", " PP-Bizon - Space Cat", "USP-S - Ticket to Hell", "M4A1-S - Night Terror"
        };
        vector<string> classifiedList = {
            "MP7 - Abyssal Apparition", "Dual Berettas - Melondrama", "FAMAS - Rapid Eye Movement"
        };
        vector<string> covertList = {
            "MP9 - Starlight Protector", "AK-47 - Nightwish"
        };
        vector<string> goldList = {
            "Huntsman - Gamma Doppler", "Falchion - Gamma Doppler", "Butterfly - Freehand", "Bowie - Black Laminate", "Bowie - Freehand", "Huntsman - Lore", "Huntsman - Black Laminate", "Huntsman - Freehand", "Falchion - Lore", "Bowie - Lore", "Butterfly - Autotronic", "Shadow Daggers - Autotronic", "Falchion - Autotronic", "Falchion - Black Laminate", "Bowie - Autotronic", "Shaddow Daggers - Lore", "Butterfly - Black Laminate", "Shadow Daggers - Freehand", "Huntsman - Bright Water", "Falchion - Freehand", "Shadow Daggers - Gamma Doppler", "Huntsman - Autotronic", "Bowie - Gamma Doppler", "Bowie - Bright Water", "Falchion - Bright Water", "Shadow Daggers - Black Laminate", "Shadow Daggers - Bright Water", "Butterfly - Bright Water", "Butterfly - Lore", "Butterfly - Gamma Doppler"
        };


        if (rarity <= 100 && rarity > 20.08) {  
            int randomMilSpec = rand() % milSpecList.size();
            weapon = milSpecList[randomMilSpec];
        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            int randomRestricted = rand() % restrictedList.size();
            weapon = restrictedList[randomRestricted];
        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            int randomClassified = rand() % classifiedList.size();
            weapon = classifiedList[randomClassified];
        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            int randomCovert = rand() % covertList.size();
            weapon = covertList[randomCovert];
        }
        else if (rarity <= 0.26) {
            int randomGold = rand() % goldList.size();
            weapon = goldList[randomGold];
        }

        cout << weapon << "\n";
    }

    void assignPattern() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 1000);
        pattern = dist(gen);
        cout << "Pattern:" << pattern << "\n";
    }

    bool assignStatTrak(double rarity) {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 100);
        int assignStat = dist(gen);

        if (assignStat <= 10) {
            bool statTrak = true;
            cout << "Weapon is Stat-Trak.\n";
        }
        else {
            bool statTrak = false;
        }
        return 0;
    }

    void assignPrice() {
        totalSpent += 4.19;

        cout << fixed << showpoint;
        cout << setprecision(2);

    
        cout << "Total Spent: $" << totalSpent << "\n";
    }

    double getPrice() {
        return totalSpent;
    }
};




//WEAPONS CASE



class openWeapons {
    public:
        double rarity;
        double Float;
        string weapon;
        bool statTrak;
        int pattern;
        double totalSpent;
    openWeapons() : rarity(0), Float(0), weapon(""), statTrak(false), pattern(0), totalSpent(0){}

    double assignRarity() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00, 100.00);

        double rarity = dist(gen);

        if (rarity <= 0.26) {
            cout << "Gold!\n";

        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            cout << "Covert!\n";


        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            cout << "Classified!\n";

        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            cout << "Restricted!\n";

        }
        else if (rarity <= 100 && rarity > 20.08) {
            cout << "Mil-Spec!\n";

        }

        cout << fixed << showpoint;
        cout << setprecision(2);
        return rarity;
    }

    void assignFloat() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00000000000000, 1.00000000000000);
        double Float = dist(gen);

        if (Float >= 0.45) {
            cout << "Battle-Scarred\n";
        }
        else if (Float < 0.45000000000000 && Float >= 0.38000000000000) {
            cout << "Well-Worn\n";
        }
        else if (Float < 0.38000000000000 && Float >= 0.15000000000000) {
            cout << "Field-Tested\n";
        }
        else if (Float < 0.15000000000000 && Float >= 0.07000000000000) {
            cout << "Minimal Wear\n";
        }
        else if (Float < 0.07 && Float >= 0) {
            cout << "Factory New\n";
        }

        cout << fixed << showpoint;
        cout << setprecision(13);
        cout << "Float:" << Float << "\n";
    }

    void assignWeapon(double rarity) {

        vector<string> milSpecList = {
            "SG 553 - Ultraviolet", "AUG - Wings", "MP7 - Skulls"
        };
        vector<string> restrictedList = {
            "USP-S - Dark Water", "M4A1-S - Dark Water", "Glock-18 - Dragon Tattoo"
        };
        vector<string> classifiedList = {
            "Desert Eagle - Hypnotic", "Ak-47 - Case Hardened"
        };
        vector<string> covertList = {
            "AWP - Lightning Strike"
        };
        vector<string> goldList = {
            "M9 Bayonet - Case Hardened", "Karambit - Boreal Forest", "Karambit - Crimson Web", "Flip - Blue Steel", "Karambit - Scorched", "Bayonet - Scorched", "Karambit - Forest DDPAT", "Bayonet - Slaughter", "Bayonet - Vanilla", "Flip - Scorched", "Gut - Boreal Forest", "Flip - Safari Mesh", "Flip - Urban Masked","Flip - Crimson Web", "Bayonet - Blue Steel", "Flip - Case Hardened", "Gut - Vanilla", "Flip - Night", "Bayonet - Night", "Gut - Case Hardened", "Flip - Forest DDPAT", "Flip - Boreal Forest", "Gut - Slaughter", "Gut - Crimson Web", "Gut - Stained", "Gut - Blue Steel", "Gut - Night", "Gut - Forest DDPAT", "M9 Bayonet - Vanilla", "Karambit - Vanilla", "Flip - Vanilla", "M9 Bayonet - Urban Masked", "M9 Bayonet - Safari Mesh", "M9 Bayonet - Scorched", "M9 Bayonet - Night", "M9 Bayonet - Crimson Web", "M9 Bayonet - Boreal Forest", "M9 Bayonet - Forest DDPAT", "M9 Bayonet - Stained", "M9 Bayonet - Blue Steel", "M9 Bayonet - Slaughter", "M9 Bayonet - Fade", "Karambit - Urban Masked", "Karambit - Safari Mesh", "Karambit Night", "Karambit - Case Hardened", "Karambit - Stained", "Karambit - Blue Steel"
        };


        if (rarity <= 100 && rarity > 20.08) {
            int randomMilSpec = rand() % milSpecList.size();
            weapon = milSpecList[randomMilSpec];
        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            int randomRestricted = rand() % restrictedList.size();
            weapon = restrictedList[randomRestricted];
        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            int randomClassified = rand() % classifiedList.size();
            weapon = classifiedList[randomClassified];
        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            int randomCovert = rand() % covertList.size();
            weapon = covertList[randomCovert];
        }
        else if (rarity <= 0.26) {
            int randomGold = rand() % goldList.size();
            weapon = goldList[randomGold];
        }

        cout << weapon << "\n";
    }

    void assignPattern() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 1000);
        pattern = dist(gen);
        cout << "Pattern:" << pattern << "\n";
    }

    bool assignStatTrak(double rarity) {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 100);
        int assignStat = dist(gen);

        if (assignStat <= 10) {
            bool statTrak = true;
            cout << "Weapon is Stat-Trak.\n";
        }
        else {
            bool statTrak = false;
        }
        return 0;
    }

    void assignPrice() {
        totalSpent += 122.50;

        cout << fixed << showpoint;
        cout << setprecision(2);


        cout << "Total Spent: $" << totalSpent << "\n";
    }

    double getPrice() {
        return totalSpent;
    }
};



//GALLERY CASE



class openGallery {
public:
    double rarity;
    double Float;
    string weapon;
    bool statTrak;
    int pattern;
    double totalSpent;
    openGallery() : rarity(0), Float(0), weapon(""), statTrak(false), pattern(0), totalSpent(0) {}

    double assignRarity() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00, 100.00);

        double rarity = dist(gen);

        if (rarity <= 0.26) {
            cout << "Gold!\n";

        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            cout << "Covert!\n";


        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            cout << "Classified!\n";

        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            cout << "Restricted!\n";

        }
        else if (rarity <= 100 && rarity > 20.08) {
            cout << "Mil-Spec!\n";

        }

        cout << fixed << showpoint;
        cout << setprecision(2);
        return rarity;
    };

    void assignFloat() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00000000000000, 1.00000000000000);
        double Float = dist(gen);

        if (Float >= 0.45) {
            cout << "Battle-Scarred\n";
        }
        else if (Float < 0.45000000000000 && Float >= 0.38000000000000) {
            cout << "Well-Worn\n";
        }
        else if (Float < 0.38000000000000 && Float >= 0.15000000000000) {
            cout << "Field-Tested\n";
        }
        else if (Float < 0.15000000000000 && Float >= 0.07000000000000) {
            cout << "Minimal Wear\n";
        }
        else if (Float < 0.07 && Float >= 0) {
            cout << "Factory New\n";
        }

        cout << fixed << showpoint;
        cout << setprecision(13);
        cout << "Float:" << Float << "\n";
    }
    void assignWeapon(double rarity) {

        vector<string> milSpecList = {
            "M249 - Hypnosis", "MP5-SD - Statics", "SCAR-20 - Trail Blazer", "AUG - Luxe Trim", "R8 Revolver - Tango", "USP-S - 27", "Desert Eagle - Calligraffiti"
        };
        vector<string> restrictedList = {
            "P90 - Randy Rush", "Dual Berrettas - Hydro Strike", "SSG 08 - Rapid Transit", "MAC-10 - Saiba Oni", "M4A4 - Turbine"
        };
        vector<string> classifiedList = {
            "UMP-45 - Neo-Noir", "P250 - Epicenter", "AK47 - The Outsiders"
        };
        vector<string> covertList = {
            "Glock-18 - Gold Toof", "M4A1-S - Vaporwave"
        };
        vector<string> goldList = {
            "Kukri - Salughter", "Kukri - Night Stripe", "Kukri - Urban Masked", "Kukri - Crimson Web", "Kukri - Scorched", "Kukri - Blue Steel", "Kukri - Vanilla", "Kukri - Case Hardened", "Kukri - Forest DDPAT", "Kukri - Boreal Forest", "Kukri - Fade", "Kukri - Stained", "Kukri - Safari Mesh"
        };


        if (rarity <= 100 && rarity > 20.08) {
            int randomMilSpec = rand() % milSpecList.size();
            weapon = milSpecList[randomMilSpec];
        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            int randomRestricted = rand() % restrictedList.size();
            weapon = restrictedList[randomRestricted];
        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            int randomClassified = rand() % classifiedList.size();
            weapon = classifiedList[randomClassified];
        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            int randomCovert = rand() % covertList.size();
            weapon = covertList[randomCovert];
        }
        else if (rarity <= 0.26) {
            int randomGold = rand() % goldList.size();
            weapon = goldList[randomGold];
        }

        cout << weapon << "\n";
    }

    void assignPattern() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 1000);
        pattern = dist(gen);
        cout << "Pattern:" << pattern << "\n";
    }

    bool assignStatTrak() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 100);
        int assignStat = dist(gen);

        if (assignStat <= 10) {
            bool statTrak = true;
            cout << "Weapon is Stat-Trak.\n";
        }
        else {
            bool statTrak = false;
        }
        return 0;
    }

    void assignPrice() {
        totalSpent += 3.47;

        cout << fixed << showpoint;
        cout << setprecision(2);


        cout << "Total Spent: $" << totalSpent << "\n";
    }

    double getPrice() {
        return totalSpent;
    }


};


//KILOWATT CASE

class openKilowatt {
public:
    double rarity;
    double Float;
    string weapon;
    bool statTrak;
    int pattern;
    double totalSpent;
    openKilowatt() : rarity(0), Float(0), weapon(""), statTrak(false), pattern(0), totalSpent(0) {}

    double assignRarity() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00, 100.00);

        double rarity = dist(gen);

        if (rarity <= 0.26) {
            cout << "Gold!\n";

        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            cout << "Covert!\n";


        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            cout << "Classified!\n";

        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            cout << "Restricted!\n";

        }
        else if (rarity <= 100 && rarity > 20.08) {
            cout << "Mil-Spec!\n";

        }

        cout << fixed << showpoint;
        cout << setprecision(2);
        return rarity;
    };

    void assignFloat() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00000000000000, 1.00000000000000);
        double Float = dist(gen);

        if (Float >= 0.45) {
            cout << "Battle-Scarred\n";
        }
        else if (Float < 0.45000000000000 && Float >= 0.38000000000000) {
            cout << "Well-Worn\n";
        }
        else if (Float < 0.38000000000000 && Float >= 0.15000000000000) {
            cout << "Field-Tested\n";
        }
        else if (Float < 0.15000000000000 && Float >= 0.07000000000000) {
            cout << "Minimal Wear\n";
        }
        else if (Float < 0.07 && Float >= 0) {
            cout << "Factory New\n";
        }

        cout << fixed << showpoint;
        cout << setprecision(13);
        cout << "Float:" << Float << "\n";
    }
    void assignWeapon(double rarity) {

        vector<string> milSpecList = {
            "Tec-9 - Slag", "XM1014 - Irezumi", "UMP-45 - Motorized", "SSG 08 - Dezastre", "Dual Berettas - Hideout", "Nova - Dark Sigil", "MAC-10 - Light Box"
        };
        vector<string> restrictedList = {
            "Five-SeveN - Hybrid", "MP7 - Just Smile", "Sawed-Off - Analog Input", "M4A4 - Etch Lord", "Glock-18 - Block-18"
        };
        vector<string> classifiedList = {
            "Zeus x27 - Olympus", "USP-S - Jawbreaker", "M4A1-S - Black Lotus"
        };
        vector<string> covertList = {
            "AWP - Chrome Cannon", "AK-47 - Inheritance"
        };
        vector<string> goldList = {
            "Kukri - Salughter", "Kukri - Night Stripe", "Kukri - Urban Masked", "Kukri - Crimson Web", "Kukri - Scorched", "Kukri - Blue Steel", "Kukri - Vanilla", "Kukri - Case Hardened", "Kukri - Forest DDPAT", "Kukri - Boreal Forest", "Kukri - Fade", "Kukri - Stained", "Kukri - Safari Mesh"
        };


        if (rarity <= 100 && rarity > 20.08) {
            int randomMilSpec = rand() % milSpecList.size();
            weapon = milSpecList[randomMilSpec];
        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            int randomRestricted = rand() % restrictedList.size();
            weapon = restrictedList[randomRestricted];
        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            int randomClassified = rand() % classifiedList.size();
            weapon = classifiedList[randomClassified];
        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            int randomCovert = rand() % covertList.size();
            weapon = covertList[randomCovert];
        }
        else if (rarity <= 0.26) {
            int randomGold = rand() % goldList.size();
            weapon = goldList[randomGold];
        }

        cout << weapon << "\n";
    }

    void assignPattern() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 1000);
        pattern = dist(gen);
        cout << "Pattern:" << pattern << "\n";
    }

    bool assignStatTrak() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 100);
        int assignStat = dist(gen);

        if (assignStat <= 10) {
            bool statTrak = true;
            cout << "Weapon is Stat-Trak.\n";
        }
        else {
            bool statTrak = false;
        }
        return 0;
    }

    void assignPrice() {
        totalSpent += 3.24;

        cout << fixed << showpoint;
        cout << setprecision(2);


        cout << "Total Spent: $" << totalSpent << "\n";
    }

    double getPrice() {
        return totalSpent;
    }

};




//REVOLUTION CASE

class openRevolution {
public:
    double rarity;
    double Float;
    string weapon;
    bool statTrak;
    int pattern;
    double totalSpent;
    openRevolution() : rarity(0), Float(0), weapon(""), statTrak(false), pattern(0), totalSpent(0) {}

    double assignRarity() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00, 100.00);

        double rarity = dist(gen);

        if (rarity <= 0.26) {
            cout << "Gold!\n";

        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            cout << "Covert!\n";


        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            cout << "Classified!\n";

        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            cout << "Restricted!\n";

        }
        else if (rarity <= 100 && rarity > 20.08) {
            cout << "Mil-Spec!\n";

        }

        cout << fixed << showpoint;
        cout << setprecision(2);
        return rarity;
    };

    void assignFloat() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00000000000000, 1.00000000000000);
        double Float = dist(gen);

        if (Float >= 0.45) {
            cout << "Battle-Scarred\n";
        }
        else if (Float < 0.45000000000000 && Float >= 0.38000000000000) {
            cout << "Well-Worn\n";
        }
        else if (Float < 0.38000000000000 && Float >= 0.15000000000000) {
            cout << "Field-Tested\n";
        }
        else if (Float < 0.15000000000000 && Float >= 0.07000000000000) {
            cout << "Minimal Wear\n";
        }
        else if (Float < 0.07 && Float >= 0) {
            cout << "Factory New\n";
        }

        cout << fixed << showpoint;
        cout << setprecision(13);
        cout << "Float:" << Float << "\n";
    }
    void assignWeapon(double rarity) {

        vector<string> milSpecList = {
            "P250 - Re.built", "Tec-9 - Rebel", "MAG-7 - Insomnia", "SCAR-20 - Fragments", "SG 553 - Cyberforce", "MP9 - Featherweight", "MP5-SD - Liquidation"
        };
        vector<string> restrictedList = {
            "R8 Revolver - Banana Cannon", "P90 - Neoqueen", "MAC-10 - Sakkaku", "Glock-18 - Umbral Rabbit", "M4A1-S - Emphorosaur"
        };
        vector<string> classifiedList = {
            "P2000 - Wicked Sick", "UMP-45 - Wild Child", "AWP - Duality"
        };
        vector<string> covertList = {
            "AK-47 - Headshot", "M4A4 - Temukau"
        };
        vector<string> goldList = {
            "Moto - Polygon", "Driver - Imperial Plaid", "Sport - Bronze Morph", "Specialist - Mongul", "Driver - Racing Green", "Specialist - Fade", "Sport - Vice", "Hydra - Case Hardened", "Hydra - Mangrove", "Specialist - Crimson Web", "Moto - Transport", "Specialist - Buckshot", "Moto - Turtle", "Hydra - Emerald", "Hydra - Rattler", "Driver - Overtake", "Driver - King Snake", "Hand Wraps - Overprint", "Sport - Omega", "Moto - POW!", "Hand Wraps - Duct Tape", "Hand Wraps - Arboreal", "Hand Wraps - Cobalt Skulls", "Sport - Amphibious"
        };


        if (rarity <= 100 && rarity > 20.08) {
            int randomMilSpec = rand() % milSpecList.size();
            weapon = milSpecList[randomMilSpec];
        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            int randomRestricted = rand() % restrictedList.size();
            weapon = restrictedList[randomRestricted];
        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            int randomClassified = rand() % classifiedList.size();
            weapon = classifiedList[randomClassified];
        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            int randomCovert = rand() % covertList.size();
            weapon = covertList[randomCovert];
        }
        else if (rarity <= 0.26) {
            int randomGold = rand() % goldList.size();
            weapon = goldList[randomGold];
        }

        cout << weapon << "\n";
    }

    void assignPattern() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 1000);
        int pattern = dist(gen);
        cout << "Pattern:" << pattern << "\n";
    }

    bool assignStatTrak() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 100);
        int assignStat = dist(gen);

        if (assignStat <= 10) {
            bool statTrak = true;
            cout << "Weapon is Stat-Trak.\n";
        }
        else {
            bool statTrak = false;
        }
        return 0;
    }

    void assignPrice() {
        totalSpent += 2.99;

        cout << fixed << showpoint;
        cout << setprecision(2);


        cout << "Total Spent: $" << totalSpent << "\n";
    }

    double getPrice() {
        return totalSpent;
    }

};


//Recoil Case


class openRecoil {
public:
    double rarity;
    double Float;
    string weapon;
    bool statTrak;
    int pattern;
    double totalSpent;
    openRecoil() : rarity(0), Float(0), weapon(""), statTrak(false), pattern(0), totalSpent(0) {}

    double assignRarity() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00, 100.00);

        double rarity = dist(gen);

        if (rarity <= 0.26) {
            cout << "Gold!\n";

        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            cout << "Covert!\n";


        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            cout << "Classified!\n";

        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            cout << "Restricted!\n";

        }
        else if (rarity <= 100 && rarity > 20.08) {
            cout << "Mil-Spec!\n";

        }

        cout << fixed << showpoint;
        cout << setprecision(2);
        return rarity;
    };

    void assignFloat() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00000000000000, 1.00000000000000);
        double Float = dist(gen);

        if (Float >= 0.45) {
            cout << "Battle-Scarred\n";
        }
        else if (Float < 0.45000000000000 && Float >= 0.38000000000000) {
            cout << "Well-Worn\n";
        }
        else if (Float < 0.38000000000000 && Float >= 0.15000000000000) {
            cout << "Field-Tested\n";
        }
        else if (Float < 0.15000000000000 && Float >= 0.07000000000000) {
            cout << "Minimal Wear\n";
        }
        else if (Float < 0.07 && Float >= 0) {
            cout << "Factory New\n";
        }

        cout << fixed << showpoint;
        cout << setprecision(13);
        cout << "Float:" << Float << "\n";
    }
    void assignWeapon(double rarity) {

        vector<string> milSpecList = {
            "MAC-10 - Monkeyflage", "UMP-45 - Roadblock", "Negev - Drop Me", "FAMAS - Meow36", "Galil AR - Destroyer", "Glock-18 - Winterized", "M4A4 - Poly Mag"
        };
        vector<string> restrictedList = {
            "R8 Revolver - Crazy 8", "P90 - Vent Rush", "M249 - Downtown", "Dual Berettas - Flora Carnivora", "SG 553 - Dragon Tech"
        };
        vector<string> classifiedList = {
            "P250 - Visions", "Sawed-Off - Kiss Love", "AK-47 - Ice Coaled"
        };
        vector<string> covertList = {
            "AWP - Chromatic Abberation", "USP-S - Printstream"
        };
        vector<string> goldList = {
            "Moto - Smoke Out", "Sport - Slingshot", "Broken Fang - Unhinged", "Driver - Snow Leopard", "Sport - Scarlet Shamagh", "Broken Fang - Needle Point", "Moto - Finish Line", "Specialist - Marble Fade", "Hand Wraps - Caution", "Moto - 3rd Commando Company", "Sport - Nocts", "Moto _ Blood Pressure", "Broken Fang - Jade", "Specialist - Field Agent", "Driver Gloves - Queen Jaguar", "Broken Fang - Yellow-banded", "Driver - Rezan the Red", "Sport - Big Game", "Driver - Black Tie", "Hand Wraps - Giraffe", "Hand Wraps - Desert Shamagh", "Specialist - Lt. Commander", "Hand Wraps - Constrictor", "Specialist - Tiger Strike"
        };


        if (rarity <= 100 && rarity > 20.08) {
            int randomMilSpec = rand() % milSpecList.size();
            weapon = milSpecList[randomMilSpec];
        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            int randomRestricted = rand() % restrictedList.size();
            weapon = restrictedList[randomRestricted];
        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            int randomClassified = rand() % classifiedList.size();
            weapon = classifiedList[randomClassified];
        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            int randomCovert = rand() % covertList.size();
            weapon = covertList[randomCovert];
        }
        else if (rarity <= 0.26) {
            int randomGold = rand() % goldList.size();
            weapon = goldList[randomGold];
        }

        cout << weapon << "\n";
    }

    void assignPattern() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 1000);
        int pattern = dist(gen);
        cout << "Pattern:" << pattern << "\n";
    }

    bool assignStatTrak() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 100);
        int assignStat = dist(gen);

        if (assignStat <= 10) {
            bool statTrak = true;
            cout << "Weapon is Stat-Trak.\n";
        }
        else {
            bool statTrak = false;
        }
        return 0;
    }

    void assignPrice() {
        totalSpent += 2.70;

        cout << fixed << showpoint;
        cout << setprecision(2);


        cout << "Total Spent: $" << totalSpent << "\n";
    }

    double getPrice() {
        return totalSpent;
    }

};



//Chroma 2 Case


class openChroma2 {
public:
    double rarity;
    double Float;
    string weapon;
    bool statTrak;
    int pattern;
    double totalSpent;
    openChroma2() : rarity(0), Float(0), weapon(""), statTrak(false), pattern(0), totalSpent(0) {}

    double assignRarity() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00, 100.00);

        double rarity = dist(gen);

        if (rarity <= 0.26) {
            cout << "Gold!\n";

        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            cout << "Covert!\n";


        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            cout << "Classified!\n";

        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            cout << "Restricted!\n";

        }
        else if (rarity <= 100 && rarity > 20.08) {
            cout << "Mil-Spec!\n";

        }

        cout << fixed << showpoint;
        cout << setprecision(2);
        return rarity;
    };

    void assignFloat() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00000000000000, 1.00000000000000);
        double Float = dist(gen);

        if (Float >= 0.45) {
            cout << "Battle-Scarred\n";
        }
        else if (Float < 0.45000000000000 && Float >= 0.38000000000000) {
            cout << "Well-Worn\n";
        }
        else if (Float < 0.38000000000000 && Float >= 0.15000000000000) {
            cout << "Field-Tested\n";
        }
        else if (Float < 0.15000000000000 && Float >= 0.07000000000000) {
            cout << "Minimal Wear\n";
        }
        else if (Float < 0.07 && Float >= 0) {
            cout << "Factory New\n";
        }

        cout << fixed << showpoint;
        cout << setprecision(13);
        cout << "Float:" << Float << "\n";
    }
    void assignWeapon(double rarity) {

        vector<string> milSpecList = {
            "Negev - Man-o'-War", "MP7 - Armor Core", "Sawed-Off - Origami", "P250 - Valence", "Desert Eagle - Bronze Deco", "AK-47 - Elite Build"
        };
        vector<string> restrictedList = {
            "UMP-45 - Grand Prix", "CZ75 - Pole Position", "MAG-7 - Heat", "AWP - Worm God"
        };
        vector<string> classifiedList = {
            "FAMAS - Djinn", "Five-SeveN - Monkey Business", "Galil AR - Eco"
        };
        vector<string> covertList = {
            "MAC-10 - Neon Rider", "M4A1-S - Hyper Beast"
        };
        vector<string> goldList = {
            "Gut - Doppler", "Bayonet - Doppler", "Bayonet - Marble Fade", "M9 Bayonet - Doppler", "M9 Tiger Tooth", "Flip - Doppler", "Gut - Marble Fade", "Bayonet - Ultraviolet", "Gut - Tiger Tooth", "Bayonet - Tiger Tooth", "Flip - Damascus Steel", "Flip - Tiger Tooth", "Bayonet - Damascus Steel", "Gut - Ultraviolet", "Bayonet - Rust Coat", "Gut - Rust Coat", "Flip - Ultraviolet", "Gut - Damascus Steel", "M9 Bayonet - Ultraviolet", "M9 Bayonet - Rust Coat", "M9 Bayonet - Damascus Steel", "M9 Bayonet - Marble Fade", "Karambit - Ultraviolet", "Karambit - Rust Coat", "Karambit - Damascus Steel", "Karambit - Tiger Tooth", "Karambit - Marble Fade", "Karambit - Doppler", "Flip - Rust Coat", "Flip - Marble Fade"
        };


        if (rarity <= 100 && rarity > 20.08) {
            int randomMilSpec = rand() % milSpecList.size();
            weapon = milSpecList[randomMilSpec];
        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            int randomRestricted = rand() % restrictedList.size();
            weapon = restrictedList[randomRestricted];
        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            int randomClassified = rand() % classifiedList.size();
            weapon = classifiedList[randomClassified];
        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            int randomCovert = rand() % covertList.size();
            weapon = covertList[randomCovert];
        }
        else if (rarity <= 0.26) {
            int randomGold = rand() % goldList.size();
            weapon = goldList[randomGold];
        }

        cout << weapon << "\n";
    }

    void assignPattern() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 1000);
        int pattern = dist(gen);
        cout << "Pattern:" << pattern << "\n";
    }

    bool assignStatTrak() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 100);
        int assignStat = dist(gen);

        if (assignStat <= 10) {
            bool statTrak = true;
            cout << "Weapon is Stat-Trak.\n";
        }
        else {
            bool statTrak = false;
        }
        return 0;
    }

    void assignPrice() {
        totalSpent += 5.57;

        cout << fixed << showpoint;
        cout << setprecision(2);


        cout << "Total Spent: $" << totalSpent << "\n";
    }

    double getPrice() {
        return totalSpent;
    }
};




//Chroma 3 Case

class openChroma3 {
public:
    double rarity;
    double Float;
    string weapon;
    bool statTrak;
    int pattern;
    double totalSpent;
    openChroma3() : rarity(0), Float(0), weapon(""), statTrak(false), pattern(0), totalSpent(0) {}

    double assignRarity() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00, 100.00);

        double rarity = dist(gen);

        if (rarity <= 0.26) {
            cout << "Gold!\n";

        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            cout << "Covert!\n";


        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            cout << "Classified!\n";

        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            cout << "Restricted!\n";

        }
        else if (rarity <= 100 && rarity > 20.08) {
            cout << "Mil-Spec!\n";

        }

        cout << fixed << showpoint;
        cout << setprecision(2);
        return rarity;
    };

    void assignFloat() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00000000000000, 1.00000000000000);
        double Float = dist(gen);

        if (Float >= 0.45) {
            cout << "Battle-Scarred\n";
        }
        else if (Float < 0.45000000000000 && Float >= 0.38000000000000) {
            cout << "Well-Worn\n";
        }
        else if (Float < 0.38000000000000 && Float >= 0.15000000000000) {
            cout << "Field-Tested\n";
        }
        else if (Float < 0.15000000000000 && Float >= 0.07000000000000) {
            cout << "Minimal Wear\n";
        }
        else if (Float < 0.07 && Float >= 0) {
            cout << "Factory New\n";
        }

        cout << fixed << showpoint;
        cout << setprecision(13);
        cout << "Float:" << Float << "\n";
    }
    void assignWeapon(double rarity) {

        vector<string> milSpecList = {
            "Sawed-Off - Fubar", "SG 553 - Atlas", "G3SG1 - Orange Crash", "P2000 - Oceanic", "Dual Berettas - Ventilators", "M249 - Spectre", "MP9 - Bioleak"
        };
        vector<string> restrictedList = {
            "CZ75 - Red Astor", "XM1014 - Black Tie", "Tec-9 - Re-Entry", "Galil AR - Firefight", "SSG 08 - Ghost Crusader"
        };
        vector<string> classifiedList = {
            "AUG - Fleet Flock", "UMP-45 - Primal Saber", "P250 - Asiimov"
        };
        vector<string> covertList = {
            "PP-Bizon - Judgement of Anubis", "M4A1-S - Chantico's Fire"
        };
        vector<string> goldList = {
            "Gut - Doppler", "Bayonet - Doppler", "Bayonet - Marble Fade", "M9 Bayonet - Doppler", "M9 Tiger Tooth", "Flip - Doppler", "Gut - Marble Fade", "Bayonet - Ultraviolet", "Gut - Tiger Tooth", "Bayonet - Tiger Tooth", "Flip - Damascus Steel", "Flip - Tiger Tooth", "Bayonet - Damascus Steel", "Gut - Ultraviolet", "Bayonet - Rust Coat", "Gut - Rust Coat", "Flip - Ultraviolet", "Gut - Damascus Steel", "M9 Bayonet - Ultraviolet", "M9 Bayonet - Rust Coat", "M9 Bayonet - Damascus Steel", "M9 Bayonet - Marble Fade", "Karambit - Ultraviolet", "Karambit - Rust Coat", "Karambit - Damascus Steel", "Karambit - Tiger Tooth", "Karambit - Marble Fade", "Karambit - Doppler", "Flip - Rust Coat", "Flip - Marble Fade"
        };


        if (rarity <= 100 && rarity > 20.08) {
            int randomMilSpec = rand() % milSpecList.size();
            weapon = milSpecList[randomMilSpec];
        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            int randomRestricted = rand() % restrictedList.size();
            weapon = restrictedList[randomRestricted];
        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            int randomClassified = rand() % classifiedList.size();
            weapon = classifiedList[randomClassified];
        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            int randomCovert = rand() % covertList.size();
            weapon = covertList[randomCovert];
        }
        else if (rarity <= 0.26) {
            int randomGold = rand() % goldList.size();
            weapon = goldList[randomGold];
        }

        cout << weapon << "\n";
    }

    void assignPattern() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 1000);
        int pattern = dist(gen);
        cout << "Pattern:" << pattern << "\n";
    }

    bool assignStatTrak() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 100);
        int assignStat = dist(gen);

        if (assignStat <= 10) {
            bool statTrak = true;
            cout << "Weapon is Stat-Trak.\n";
        }
        else {
            bool statTrak = false;
        }
        return 0;
    }

    void assignPrice() {
        totalSpent += 5.38;

        cout << fixed << showpoint;
        cout << setprecision(2);


        cout << "Total Spent: $" << totalSpent << "\n";
    }

    double getPrice() {
        return totalSpent;
    }
};



//Chroma Case


class openChroma {
public:
    double rarity;
    double Float;
    string weapon;
    bool statTrak;
    int pattern;
    double totalSpent;
    openChroma() : rarity(0), Float(0), weapon(""), statTrak(false), pattern(0), totalSpent(0) {}

    double assignRarity() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00, 100.00);

        double rarity = dist(gen);

        if (rarity <= 0.26) {
            cout << "Gold!\n";

        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            cout << "Covert!\n";


        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            cout << "Classified!\n";

        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            cout << "Restricted!\n";

        }
        else if (rarity <= 100 && rarity > 20.08) {
            cout << "Mil-Spec!\n";

        }

        cout << fixed << showpoint;
        cout << setprecision(2);
        return rarity;
    };

    void assignFloat() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.00000000000000, 1.00000000000000);
        double Float = dist(gen);

        if (Float >= 0.45) {
            cout << "Battle-Scarred\n";
        }
        else if (Float < 0.45000000000000 && Float >= 0.38000000000000) {
            cout << "Well-Worn\n";
        }
        else if (Float < 0.38000000000000 && Float >= 0.15000000000000) {
            cout << "Field-Tested\n";
        }
        else if (Float < 0.15000000000000 && Float >= 0.07000000000000) {
            cout << "Minimal Wear\n";
        }
        else if (Float < 0.07 && Float >= 0) {
            cout << "Factory New\n";
        }

        cout << fixed << showpoint;
        cout << setprecision(13);
        cout << "Float:" << Float << "\n";
    }
    void assignWeapon(double rarity) {

        vector<string> milSpecList = {
            "M249 - System Lock", "XM1014 - Quicksilver", "SCAR-20 - Grotto", "Glock-18 - Catacombs", "MP9 - Deadly Posion"
        };
        vector<string> restrictedList = {
            "Sawed-Off - Serenity", "Dual Berettas - Urban Shock", "MAC-10 - Malachite", "Desert Eagle - Naga"
        };
        vector<string> classifiedList = {
            "P250 - Muertos","M4A4 - Dragon King", "AK-47 - Cartel"
        };
        vector<string> covertList = {
            "Galil AR - Chatterbox", "AWP - Man-o'-War"
        };
        vector<string> goldList = {
            "Gut - Doppler", "Bayonet - Doppler", "Bayonet - Marble Fade", "M9 Bayonet - Doppler", "M9 Tiger Tooth", "Flip - Doppler", "Gut - Marble Fade", "Bayonet - Ultraviolet", "Gut - Tiger Tooth", "Bayonet - Tiger Tooth", "Flip - Damascus Steel", "Flip - Tiger Tooth", "Bayonet - Damascus Steel", "Gut - Ultraviolet", "Bayonet - Rust Coat", "Gut - Rust Coat", "Flip - Ultraviolet", "Gut - Damascus Steel", "M9 Bayonet - Ultraviolet", "M9 Bayonet - Rust Coat", "M9 Bayonet - Damascus Steel", "M9 Bayonet - Marble Fade", "Karambit - Ultraviolet", "Karambit - Rust Coat", "Karambit - Damascus Steel", "Karambit - Tiger Tooth", "Karambit - Marble Fade", "Karambit - Doppler", "Flip - Rust Coat", "Flip - Marble Fade"
        };


        if (rarity <= 100 && rarity > 20.08) {
            int randomMilSpec = rand() % milSpecList.size();
            weapon = milSpecList[randomMilSpec];
        }
        else if (rarity <= 20.08 && rarity > 4.10) {
            int randomRestricted = rand() % restrictedList.size();
            weapon = restrictedList[randomRestricted];
        }
        else if (rarity <= 4.10 && rarity > 0.90) {
            int randomClassified = rand() % classifiedList.size();
            weapon = classifiedList[randomClassified];
        }
        else if (rarity <= 0.90 && rarity > 0.26) {
            int randomCovert = rand() % covertList.size();
            weapon = covertList[randomCovert];
        }
        else if (rarity <= 0.26) {
            int randomGold = rand() % goldList.size();
            weapon = goldList[randomGold];
        }

        cout << weapon << "\n";
    }

    void assignPattern() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 1000);
        int pattern = dist(gen);
        cout << "Pattern:" << pattern << "\n";
    }

    bool assignStatTrak() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(0, 100);
        int assignStat = dist(gen);

        if (assignStat <= 10) {
            bool statTrak = true;
            cout << "Weapon is Stat-Trak.\n";
        }
        else {
            bool statTrak = false;
        }
        return 0;
    }

    void assignPrice() {
        totalSpent += 6.01;

        cout << fixed << showpoint;
        cout << setprecision(2);


        cout << "Total Spent: $" << totalSpent << "\n";
    }

    double getPrice() {
        return totalSpent;
    }

};




int main() {
    int input1 = 1;
    int input2 = 1;
    srand(time(0));

    cout << "Please choose your case!\n";
    cout << "(1). Dreams and Nightmares\n";
    cout << "(2). CS:GO Weapon Case\n";
    cout << "(3). Gallery Case\n";
    cout << "(4). Kilowatt Case\n";
    cout << "(5). Revolution Case\n";
    cout << "(6). Recoil Case\n";
    cout << "(7). Chroma 2 Case\n";
    cout << "(8). Chroma 3 Case\n";
    cout << "(9.) Chroma Case \n";
    cout << "(10). Quit Program\n";
    cin >> input1;


    
        if (input1 == 1) {
            openDreams dreams;

            while (input2 == 1) {
                double rarity = dreams.assignRarity();
                dreams.assignFloat();
                dreams.assignPattern();
                dreams.assignWeapon(rarity);
                dreams.assignStatTrak(rarity);
                dreams.assignPrice();
                dreams.getPrice();
                

                cout << "Open another case? (1 for yes, 2 for no)?\n";
                cout << "\n";
                cin >> input2;
            } 
        }
    

        else if (input1 == 2) {
            openWeapons weaponCase;
            while (input2 == 1) {
                double rarity = weaponCase.assignRarity();
                weaponCase.assignFloat();
                weaponCase.assignPattern();
                weaponCase.assignWeapon(rarity);
                weaponCase.assignStatTrak(rarity);
                weaponCase.assignPrice();
                weaponCase.getPrice();

                cout << "Open another case? (1 for yes, 2 for no)?\n";
                cout << "\n";
                cin >> input2;
            }
        }

        else if (input1 == 3) {
            openGallery gallery;
            while (input2 == 1) { 
                double rarity = gallery.assignRarity();
                gallery.assignFloat();
                gallery.assignPattern();
                gallery.assignWeapon(rarity);
                gallery.assignStatTrak();
                gallery.assignPrice();
                gallery.getPrice();

                cout << "Open another case? (1 for yes, 2 for no)?\n";
                cout << "\n";
                cin >> input2;
            }
        }

        else if (input1 == 4) {
            openKilowatt kilowatt;
            while (input2 == 1) {
                double rarity = kilowatt.assignRarity();
                kilowatt.assignFloat();
                kilowatt.assignPattern();
                kilowatt.assignWeapon(rarity);
                kilowatt.assignStatTrak();
                kilowatt.assignPrice();
                kilowatt.getPrice();

                cout << "Open another case? (1 for yes, 2 for no)?\n";
                cout << "\n";
                cin >> input2;
            }
        }

        else if (input1 == 5) {
            openRevolution revolution;
            while (input2 == 1) {
                double rarity = revolution.assignRarity();
                revolution.assignFloat();
                revolution.assignPattern();
                revolution.assignWeapon(rarity);
                revolution.assignStatTrak();
                revolution.assignPrice();
                revolution.getPrice();

                cout << "Open another case? (1 for yes, 2 for no)?\n";
                cout << "\n";
                cin >> input2;
            }
        }

        else if (input1 == 6) {
            openRecoil recoil;
            while (input2 == 1) {
                double rarity = recoil.assignRarity();
                recoil.assignFloat();
                recoil.assignPattern();
                recoil.assignWeapon(rarity);
                recoil.assignStatTrak();
                recoil.assignPrice();
                recoil.getPrice();

                cout << "Open another case? (1 for yes, 2 for no)?\n";
                cout << "\n";
                cin >> input2;
            }
        }

        else if (input1 == 7) {
            openChroma2 chroma2;
            while (input2 == 1) {
                double rarity = chroma2.assignRarity();
                chroma2.assignFloat();
                chroma2.assignPattern();
                chroma2.assignWeapon(rarity);
                chroma2.assignStatTrak();
                chroma2.assignPrice();
                chroma2.getPrice();

                cout << "Open another case? (1 for yes, 2 for no)?\n";
                cout << "\n";
                cin >> input2;
            }
        }

        else if (input1 == 8) {
            openChroma3 chroma3;
            while (input2 == 1) {
                double rarity = chroma3.assignRarity();
                chroma3.assignFloat();
                chroma3.assignPattern();
                chroma3.assignWeapon(rarity);
                chroma3.assignStatTrak();
                chroma3.assignPrice();
                chroma3.getPrice();

                cout << "Open another case? (1 for yes, 2 for no)?\n";
                cout << "\n";
                cin >> input2;
            }
        }

        else if (input1 == 9) {
            openChroma chroma;
            while (input2 == 1) {
                double rarity = chroma.assignRarity();
                chroma.assignFloat();
                chroma.assignPattern();
                chroma.assignWeapon(rarity);
                chroma.assignStatTrak();
                chroma.assignPrice();
                chroma.getPrice();

                cout << "Open another case? (1 for yes, 2 for no)?\n";
                cout << "\n";
                cin >> input2;
            }
        }


        else {
            cout << "Thanks for playing!";
        }
    

    return 0;

};
   

    
