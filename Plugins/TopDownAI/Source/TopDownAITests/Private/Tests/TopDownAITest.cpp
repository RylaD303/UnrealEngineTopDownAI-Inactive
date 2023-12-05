#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/**
 * 
 */

// source: https://vhiterabbit.com/2018/03/02/ue4-code-fixing-test-hot-reload/
class TOPDOWNAI_API FTestModuleImpl : public FDefaultGameModuleImpl
{

    void ShutdownModule() override
    {
        /* Workaround for UE-25350 (This issue from 2016 by the way. Still not fixed.)
        Work­around would there­fore be to just cre­ate an emp­ty UCLASS in the mod­ule that con­tains the tests.*/
        //FAutomationTestFramework::Get().UnregisterAutomationTest("TopDownAITest"); // self
        //FAutomationTestFramework::Get().UnregisterAutomationTest("TestTopDownAIController");

         // ... for every test defined.

        // not working I guess...
    };

};