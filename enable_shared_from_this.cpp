#include <iostream>
#include <memory>


class A : public std::enable_shared_from_this<A>{
    public:
        ~A(){
            std::cout<<"destruct A.."<<std::endl;
        };

        std::shared_ptr<A> getObj(){
            return shared_from_this();
        };

};

int main(int argc, char* argv[]){
    {
        std::shared_ptr<A> pa = std::make_shared<A>();
        std::shared_ptr<A> pb = pa->getObj();
    };

    std::cout<<"end domain"<<std::endl;

    return 0;
};
