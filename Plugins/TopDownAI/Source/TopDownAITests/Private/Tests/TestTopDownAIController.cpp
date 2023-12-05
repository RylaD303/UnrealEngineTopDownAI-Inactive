#include "Misc/AutomationTest.h"
#include "TopDownAIController.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    TestTopDown2DAI,
    "TopDownAI.TopDownAITests.TopDownAIControllerTest",
    EAutomationTestFlags::SmokeFilter | EAutomationTestFlags::ApplicationContextMask)

bool TestTopDown2DAI::RunTest(FString const& Parameters)
{
    const auto bToTest = true;
    TestTrue("bool to test", bToTest);

    const auto FloatToTest = 0.F;
    const auto Expected = 10.F;
    const auto Tolerance = 11.F;
    TestEqual("float to test", FloatToTest, Expected, Tolerance);

    return true;
}