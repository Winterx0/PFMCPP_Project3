/*
  Chapter 2 Part 6 
 Implementations tasks
 
 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */
struct Foot
{
    int leftFootLength = 9;
    int rightFootLength = 9;
    int speed = 2;
    int distance;
    int move;
    int howFast();

    void stepForward(int setSpeed);
    void stepSize(int setSpeed); 
};

void Foot::stepForward(int setSpeed)
{
    move = leftFootLength * setSpeed + speed;
}
void Foot::stepSize(int setSpeed)
{
    distance = rightFootLength * setSpeed + speed;
}
int Foot::howFast()
{
    return move + distance;
}

struct Person
{
    int age;
    int height;
    float weight;
    float IQ;
    unsigned int meyersBriggsScore;

    int leg();
    int pathTraveled;
    Foot left;
    Foot right;

    void run(int setSpeed, bool startWithLeftFoot);
};

void Person::run(int setSpeed, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        left.stepForward(setSpeed);
    }
    else
    {
        right.stepForward(setSpeed);
    }
    pathTraveled += left.move + right.move;
}
int Person::leg()
{
    return pathTraveled;
}
 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */


/*
 1)
 */
struct GuitarChords
{
    int tone;
    int numStrings = 12;
    double volumeKnob = 2;
    double getNumFrets = 2.0;
    unsigned int lengthOfNeck;
    
    struct Guitar
    {
        int steelNeck;
        bool isElectricGuitar = true;
        float inTune = 440.0f;
    };

    void tuneAndPlayGuitar(int steelNeck, bool isElectricGuitar, float inTune);

    int ready;
    int play();
};

void GuitarChords::tuneAndPlayGuitar(int steelNeck, bool isElectricGuitar, float inTune)
{
    if(isElectricGuitar)
    {
        lengthOfNeck *= numStrings + volumeKnob * tone + ready / getNumFrets * 0.5;
    }
    else
    {
        steelNeck *=+ lengthOfNeck + inTune + 2;
    }
}
int GuitarChords::play()
{
    return {};
}
 
/*
 2)
 */
struct Component
{
    int current;
    int isVoltage = 5000;
    double powerOut = 0.2;
    double powerIn = 0.4;
    unsigned int amountOfPower = 0;

    struct DCUnit
    {
        bool connectsToComputer = true;
        float hasCable = 3.0f;
    };

    void plugIn( bool connectsToComputer, float hasCable);
    int shielded;
};

void Component::plugIn(bool connectsToComputer, float hasCable)
{
    if(connectsToComputer)
    {
        amountOfPower *= isVoltage * powerOut / powerIn + 100 * current;
    }
    else
    {
        hasCable *= amountOfPower / 2;
    }
    shielded *= hasCable + isVoltage * 4;
}
/*
 3)
 */
struct NeuroScience
{
    int neurons;
    int brainScience = 860000000;
    double truthTeller = 10.10;
    unsigned int dreamState = 0;

    struct NeuroPath
    {
        bool isSmart = false;
        float genericThought = 500.0f;
    };

    void sleep(bool isSmart, float genericThought);
    int synapse;

};

void NeuroScience::sleep(bool isSmart, float genericThought)
{
    if(isSmart)
    {
        dreamState *= brainScience * truthTeller + neurons;
    }
    else
    {
        genericThought *= 100;
    }
    synapse *= dreamState * genericThought;
}
/*
 4)
 */
struct DogBreed
{
    int pitBull = 1;
    int terrier = 5;
    double mixedBreed = 5.0;
    float bigDog = 1.7f;
    unsigned int age = 0;

    struct Dog
    {
        bool isApuppy = false;
        float litter = 100.0f;
    };

    void walkDog( Dog dog );

    Dog Napolean;
};
/*
 5)
 */
struct Hammer
{
    int slam = 333;
    double swing = 2.0;
    float steel = 13.3f;
    float sledge = 77.0f;
    unsigned int force = 0;

    struct HammerOn
    {
        bool isAshredder = true;
        float master = 0.0f;
        void missedWork();
        void noWerk();
    };

    void always( HammerOn hammerOn );

    HammerOn Wall;

    struct ToolType
    {
        int nails = 10;
        double screws = 2.2;
        float electricHammer = 440.0f;
    };

    void notEnoughTools( ToolType toolType );

    ToolType metal;
};
/*
 6)
 */
struct TreeComponent
{
    int value = 5000000;
    int tree = 10000000;
    float purposeFunction = 808.1f;
    double process = 4.2;

    struct Configure
    {
        int classWithin  = 1;
        bool treeIsBuilt = false;
        float submit = 14.0f;
    };

    void comp( TreeComponent treeComponent );

    Configure valueTree;
};

/*
 7)
 */
struct MainApp
{
    void localNetwork();
    void blackBox();

    bool appIsRunning;
    bool menuWorks = true;

    struct DBG
    {
        char tp = 'D';
        char dp = 'B';
        char cp = 'G';
        float generate(int localNetwork = 0.0, double blackBox = 15.45);
    };

    unsigned int webBased = true;
    int manuals = 3;

    DBG main;

    void crashing(MainApp mainApp);
};
/*
 8)
 */
struct NewUnderstanding
{
    void building();

    char time = 'N';
    char to = 'E';
    char build = 'W';

    int x = 25;
    int y = 25;

    struct TestFunctions
    {
        float multiply(int x = 25, int y = 25);
        float add(char time, char to, char build);
        bool compilesCorrect = true;
    };

    void overloading(NewUnderstanding newUnderstanding);
};
/*
 9)
 */
struct NewPlug
{
    NewPlug();
    ~NewPlug();
    void run();

    bool plugIn = true;
    char generic;
    float purchase(int number = 1, double integer = 2.0);

    struct BasicDesign
    {
        bool hasAdapter = false;
        void hazard(NewPlug newPlug);
    };

    void safteyUse(BasicDesign basicDesign);

    BasicDesign socket;
};
/*
 10)
 */
struct DidItBreak
{
    bool brokenCompiler = true;
    float unknown(int didNot = 1, double did = 200.2);
    unsigned int trying = 10;

    struct Learn
    {
        bool isLearning = true;
        float crazyStuff(double check = 1.0, double status = 500.1, double wonder = 30.3, int val = 44, int UDT = 77);
    };

    void checkStatus(DidItBreak didItBreak);

    Learn newThings;
};



#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
