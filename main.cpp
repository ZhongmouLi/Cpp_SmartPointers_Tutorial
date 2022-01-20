#include <iostream>
#include <memory>


void increase_float(float& input)
{
    input ++;
} 

class cl_example
{
private:
    /* data */
public:
    cl_example(/* args */)
    {
        std::cout<<"class object is created"<<std::endl;
    };

    void state()
    {
        std::cout<<"still here"<<std::endl;
    };

    ~cl_example()
    {
        std::cout<<"class object is destoried"<<std::endl;
    };
};



int main()
{

    std::cout<< "hello smart pointers" << std::endl;

    // 1. unique pointer
    std::unique_ptr<float>Ptr_1 = std::make_unique<float>(10.0f);

    std::cout<<"1st unique pointer is "<< *Ptr_1<< std::endl;

    // unique for a class
//    std::unique_ptr<cl_example>Ptr_2 = std::make_unique<cl_example>();

    
    std::unique_ptr<float>Ptr_3 = std::make_unique<float>();
    std::cout<<"3rd unique pointer is "<< *Ptr_3<< std::endl;

    float b = 15.0f;
    std::unique_ptr<float>Ptr_4 = std::make_unique<float>(b);
    std::cout<<"4th unique pointer is "<< *Ptr_4<< std::endl;

    {
    std::unique_ptr<cl_example>Ptr_5 = std::make_unique<cl_example>();
    }

    cl_example obj_1;
    {
    std::unique_ptr<cl_example>Ptr_5 = std::make_unique<cl_example>(obj_1);
    }

    obj_1.state();

    //{
    //    int c = 1;
    //}

    //std::cout<< "c is" << c << std::endl;


    std::cout<< "this is the end" << std::endl;

    return 1;
}




















