#include <iostream>
#include <string>
#include <exception>

using namespace std;

class Configuration
{

    private:
        int Epochs;
        float LearnTax;


    public:
        Configuration(int Epochs, float LearnTax);

        void SetEpochs(int Epochs);
        void SetLearnTax(float LearnTax);
        
        //string SaveLearning(); .txt files or crypt?
        //string GetLearning(string Address); //.txt files or crypt?

};

Configuration::Configuration(int Epochs = 500, float LearnTax = 0.03f)
{
    try
    {
        SetEpochs(Epochs);
        SetLearnTax(LearnTax);
        cout << " :: Configurations set :: " << endl;
    }
    catch(const std::exception& e)
    {
        cout << e.what() << "\n";
    }
}

void Configuration::SetEpochs(int Epochs)
{
    this->Epochs = Epochs;
}

void Configuration::SetLearnTax(float LearnTax)
{
    this->LearnTax = LearnTax;
}




