#include "PluginManager/ModuleDef.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/AnalyzerPlug.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/AnalyzeTracksClusters.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/ClusterAnalysis.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/ClusterAnalysisFilter.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/MTCCAmplifyDigis.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/MTCCNtupleMaker.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/TIFNtupleMaker.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/AnaObjProducer.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/CosmicTIFFilter.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/CosmicGenFilter.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/TrackerMuFilter.h"
#include "AnalysisExamples/SiStripDetectorPerformance/interface/AnaObjAnalyzer.h"

using cms::ClusterAnalysis;
using cms::ClusterAnalysisFilter;
using cms::CosmicTIFFilter;
using cms::CosmicGenFilter;
using cms::TrackerMuFilter;

DEFINE_SEAL_MODULE();
DEFINE_ANOTHER_FWK_MODULE(AnalyzerPlug);
DEFINE_ANOTHER_FWK_MODULE(AnalyzeTracksClusters);
DEFINE_ANOTHER_FWK_MODULE(ClusterAnalysis);
DEFINE_ANOTHER_FWK_MODULE(ClusterAnalysisFilter);
DEFINE_ANOTHER_FWK_MODULE(MTCCAmplifyDigis);
DEFINE_ANOTHER_FWK_MODULE(MTCCNtupleMaker);
DEFINE_ANOTHER_FWK_MODULE(TIFNtupleMaker);
DEFINE_ANOTHER_FWK_MODULE(AnaObjProducer);
DEFINE_ANOTHER_FWK_MODULE(CosmicTIFFilter);
DEFINE_ANOTHER_FWK_MODULE(CosmicGenFilter);
DEFINE_ANOTHER_FWK_MODULE(TrackerMuFilter);
DEFINE_ANOTHER_FWK_MODULE(AnaObjAnalyzer);
