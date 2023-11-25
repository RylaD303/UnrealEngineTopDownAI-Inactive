using UnrealBuildTool;

public class TopDownAITests : ModuleRules
{
    public TopDownAITests(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "TopDownAI",  // Add the main module as a dependency
                "AutomationTest", // AutomationTests
            }
        );
    }
}