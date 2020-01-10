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
    int leg();
    int age;
    int height;
    float weight;
    float IQ;
    unsigned int meyersBriggsScore;

    Foot left;
    Foot right;

    void run(int setSpeed, bool startWithLeftFoot);

    int pathTraveled;
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
    int unshielded();
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

int Component::unshielded()
{
    return {};
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
    int cellCount();

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

int NeuroScience::cellCount()
{
    return {};
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

    void walkDog( bool isApuppy, float litter );

    int barks();
};

void DogBreed::walkDog(bool isApuppy, float litter)
{
    if(isApuppy)
    {
        age *= pitBull + mixedBreed;
    }
    else
    {
        age *= terrier + bigDog * litter;
    }
}

int DogBreed::barks()
{
    return {};
}
/*
 5)
 */
struct Hammer
{
    int wall; 
    int slam = 333;
    double swing = 2.0;
    double hit = 2.6;
    float steel = 13.3f;
    float sledge = 77.0f;
    unsigned int force = 0;
    unsigned int heavyDuty;

    struct HammerOn
    {
        bool isAshredder = true;
        float master = 0.0f;
    };

    void always( bool isAshredder, float master );

    int build();

    struct ToolType
    {
        int blocks;
        int nails = 10;
        double screws = 2.2;
        float electricHammer = 440.0f;
    };

    void notEnoughTools(int blocks, int nails, double screws, float electricHammer);

    int breakIt();
};

void Hammer::always(bool isAshredder, float master)
{
    if(isAshredder)
    {
        force *= swing + hit * slam + wall;
    }
    else
    {
        force *= steel + sledge * slam + wall;
    }

    master *= force * heavyDuty + 1;
}

int Hammer::build()
{
    return {};
}

void Hammer::notEnoughTools(int blocks, int nails, double screws, float electricHammer)
{
    if(bool hammerHits = true)
    {
        blocks *= nails + screws;
    }
    else
    {
        blocks *= nails + electricHammer;
    }
}

int Hammer::breakIt()
{
    return {};
}
/*
 6)
 */
struct TreeComponent
{
    int test;
    int value = 5000000;
    int tree = 10000000;
    float purposeFunction = 808.1f;
    double process = 4.2;

    struct Configure
    {
        int nestTest;
        int classWithin  = 1;
        bool treeIsBuilt = false;
        float submit = 14.0f;
    };

    void comp( int nestTest, int classWithin, bool treeIsBuilt,  float submit);

    int valueTree;
    int internally;
    int setUp();
};

void TreeComponent::comp( int nestTest, int classWithin, bool treeIsBuilt,  float submit)
{
    if(treeIsBuilt)
    {
        valueTree *= value + purposeFunction;
    }
    else
    {
        valueTree *= tree + process;
    }

    test *= submit * nestTest + classWithin * internally;
}

int TreeComponent::setUp()
{
    return {};
}

/*
 7)
 */
struct MainApp
{
    float blackBox = 3.0f;
    float localNetwork = 2.0f;
    unsigned int webBased = true;
    int manuals = 3;
    int byteFill;
    int reTry;

    struct DBG
    {
        bool menuWorks = true;
        float generate(int localWeb = 0.0, double staticMem = 15.45);
    };

    void crashing(bool menuWorks, float generate);

    int newest();
};

void MainApp::crashing(bool menuWorks, float generate)
{
    if(menuWorks)
    {
        reTry *= blackBox + 6;
    }
    else
    {
        reTry *= localNetwork + 8;
    }

    webBased *= byteFill + manuals * generate;
}

int MainApp::newest()
{
    return {};
}
/*
 8)
 */
struct NewUnderstanding
{
    char time = 'N';
    char to = 'E';
    char build = 'W';
    char block = '!';

    int x = 25;
    int y = 25;
    int z();

    struct TestFunctions
    {
        float multiply(int x = 25, int y = 25);
        float add(char time, char to, char build, char block);
        bool compilesCorrect = true;
    };

    void overloading(float multiply, float add, bool compilesCorrect);
};

void NewUnderstanding::overloading(float multiply, float add, bool compilesCorrect)
{
    if(compilesCorrect)
    {
        x *= multiply + 1;
    }
    else
    {
        y *= add + 2;
    }
}

int NewUnderstanding::z()
{
    return {};
}
/*
 9)
 */
struct NewPlug
{
    int toolUse;
    int getTools = 5;
    int generics;
    float purchase(int number = 1, double integer = 2.0);

    struct BasicDesign
    {
        bool hasAdapter = false;
        int hazard;
    };

    void safteyUse(bool hasAdapter, int hazard, float purchase);
    int workFlow();
};

void NewPlug::safteyUse(bool hasAdapter, int hazard, float purchase)
{
    if(hasAdapter)
    {
        hazard *= getTools * purchase + 1;
    }
    else
    {
        hazard *= getTools * generics;
    }

    toolUse *= getTools * generics * purchase + 1;
}

int NewPlug::workFlow()
{
    return {};
}
/*
 10)
 */
struct DidItBreak
{
    float unknown(int didNot = 1, double did = 200.2);
    unsigned int trying = 10;
    int makeHappen;
    int doStuff;
    int needThings();

    struct Learn
    {
        bool brokenCompiler = true;
        bool isLearning = true;
        float crazyStuff(double check = 1.0, double status = 500.1, double wonder = 30.3, int val = 44, int UDT = 77);
    };

    void doubleFunction(bool brokenCompiler, float unknown);
    void checkStatus(bool isLearning, float crazyStuff);
};

void DidItBreak::doubleFunction(bool brokenCompiler, float unknown)
{
    if(brokenCompiler)
    {
        makeHappen *= unknown + 1;
    }
    else
    {
        trying *= unknown + 2;
    }
}

void DidItBreak::checkStatus(bool isLearning, float crazyStuff)
{
    if(isLearning)
    {
        doStuff *= crazyStuff + 1;
    }
    else
    {
        doStuff *= crazyStuff + 2;
    }
}

int DidItBreak::needThings()
{
    return {};
}



#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
