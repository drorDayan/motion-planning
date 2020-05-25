#include <ompl/geometric/planners/prm/PRM.h>
#include <iostream>

namespace ob = ompl::base;
namespace og = ompl::geometric;

class Sparse_PRM : public og::PRM
{
    public:
    Sparse_PRM(const ob::SpaceInformationPtr &si, bool starStrategy = false): og::PRM(si,starStrategy){}

    ~Sparse_PRM() override{}

    ob::PlannerStatus solve(const ob::PlannerTerminationCondition &ptc) override
    {
        printf("dror dror\n");
        ob::PlannerStatus x = PRM::solve(ptc);
        printf("dror drordror drordror drordror drordror drordror drordror drordror drordror dror\n");
        return x;
    }

};
