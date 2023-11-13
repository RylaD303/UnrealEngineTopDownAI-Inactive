#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/**
 * 
 */

// source: https://vhiterabbit.com/2018/03/02/ue4-code-fixing-test-hot-reload/
class TOPDOWN2DAI_API FTestModuleImpl : public FDefaultGameModuleImpl
{

    void ShutdownModule() override
    {
        /* Workaround for UE-25350 
        Work­around would there­fore be to just cre­ate an emp­ty UCLASS in the mod­ule that con­tains the tests.
        */
        FAutomationTestFramework::Get().UnregisterAutomationTest("TopDown2DAITest");
        // ... for every test defined.
    };

};
//IMPLEMENT_MODULE(FTestModuleImpl, "DemonlessTests");