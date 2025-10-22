#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {
        if(Fireball * fire = dynamic_cast<Fireball *>(spell))
        {
            fire->revealFirepower();
        }
        else if (Frostbite * fro =  dynamic_cast<Frostbite *>(spell)) {
            fro->revealFrostpower();
        }
        else if (Waterbolt * wat =  dynamic_cast<Waterbolt *>(spell)) {
            wat->revealWaterpower();
        }
        else if (Thunderstorm * thunder =  dynamic_cast<Thunderstorm *>(spell)) {
            thunder->revealThunderpower();
        }
        else 
        {    /* ABCDE AquaVitae 
                ACBDE AruTaVae */ 
                
                std::string spell_string  = spell->revealScrollName();
                
                std::string jornal_string = SpellJournal::journal;
                
                int spell_size   = spell_string.size();
                
                int journal_size = jornal_string.size();
                
                std::vector<std::vector<int>> Data(spell_size+1,std::vector<int>(journal_size+1,0));
                
                for(int i=1;i<=spell_size;i++)
                {
                    for(int j=1;j<=journal_size;j++)
                    {
                        Data[i][j] = spell_string[i-1] == jornal_string[j-1] ? (1+Data[i-1][j-1]) : std::max(Data[i][j-1],Data[i-1][j]);
                    }
                }
                std::cout<< Data[spell_size][journal_size]<<std::endl;;
        }
    
}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}
