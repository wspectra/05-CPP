#pragma once
#include <iostream>
class Brain {
private:
    std::string ideas[100];
    int ideas_nb;
public:
    Brain(void);
    Brain(const Brain &object);
    virtual ~Brain();
    Brain &operator=(const Brain &object);
    std::string *getIdeas();
    void setIdeas(std::string idea);
};
