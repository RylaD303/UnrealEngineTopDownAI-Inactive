#include "TopDownAITests.h"

DEFINE_LOG_CATEGORY(LogTopDownAITests);

void FTopDownAITestsModule::StartupModule()
{
    // Module initialization code
    UE_LOG(LogTopDownAITests, Log, TEXT("TopDownAITests module has started!"));
}

void FTopDownAITestsModule::ShutdownModule()
{
    // Module shutdown code
    UE_LOG(LogTopDownAITests, Log, TEXT("TopDownAITests module is shutting down!"));
}

IMPLEMENT_MODULE(FTopDownAITestsModule, TopDownAITests)