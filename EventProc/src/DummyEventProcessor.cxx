#include "EventProc/DummyEventProcessor.h"

#include "Event/EventConstants.h"

using event::EventConstants;

namespace eventproc {

void DummyEventProcessor::initialize() {
    std::cout << "DummyEventProcessor: initialize" << std::endl;
}

void DummyEventProcessor::execute() {
    Event* event = this->getEvent();
    std::cout << std::endl;
    std::cout << "DummyEventProcessor: read event " << event->getEventNumber() << std::endl;
    std::cout << std::endl;
    std::cout << "  " << EventConstants::SIM_PARTICLES   << ": " << event->getCollection(EventConstants::SIM_PARTICLES)->GetEntries() << std::endl;
    std::cout << "  " << EventConstants::RECOIL_SIM_HITS << ": " << event->getCollection(EventConstants::RECOIL_SIM_HITS)->GetEntries() << std::endl;
    std::cout << "  " << EventConstants::TAGGER_SIM_HITS << ": " << event->getCollection(EventConstants::TAGGER_SIM_HITS)->GetEntries() << std::endl;
    std::cout << "  " << EventConstants::ECAL_SIM_HITS   << ": " << event->getCollection(EventConstants::ECAL_SIM_HITS)->GetEntries() << std::endl;
    std::cout << "  " << EventConstants::HCAL_SIM_HITS   << ": " << event->getCollection(EventConstants::HCAL_SIM_HITS)->GetEntries() << std::endl;
    ++nProcessed_;
}

void DummyEventProcessor::finish() {
    std::cout << "DummyEventProcessor: finished processing "
            << nProcessed_ << " events " << std::endl;
}

}
