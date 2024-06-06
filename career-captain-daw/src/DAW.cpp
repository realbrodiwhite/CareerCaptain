#include "AI.h"

OpenAI ai("your_openai_api_key");

void CareerCaptainDAW::initialize()
{
    edit = std::make_unique<tracktion_engine::Edit>(engine, tracktion_engine::Edit::Options{});

    setupRecording();
    setupPlayback();
    setupGUI();

    std::string suggestion = ai.generateMusicSuggestion("Suggest a drum pattern");
    std::cout << "AI Suggestion: " << suggestion << std::endl;
}