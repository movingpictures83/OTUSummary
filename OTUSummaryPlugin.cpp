#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "OTUSummaryPlugin.h"

void OTUSummaryPlugin::input(std::string file) {
 inputfile = file;
}

void OTUSummaryPlugin::run() {
   
}

void OTUSummaryPlugin::output(std::string file) {
//beta_diversity.py -i filtered_otu_table.biom -m euclidean,weighted_unifrac,unweighted_unifrac -t rep_set.tre -o beta_div
   //std::string command = "export OLDPATH=${PYTHONPATH}; export PYTHONPATH=${PYTHON2_DIST_PACKAGES}:${PYTHON2_SITE_PACKAGES}:${PYTHONPATH}; summarize_taxa.py ";
   std::string command = "summarize_taxa.py ";
 command += "-i "+inputfile+"-L2,3,4,5,6,7 -o "+file+"; cp "+file+"/* "+file+"/..";
 std::cout << command << std::endl;
 system(command.c_str());
}

PluginProxy<OTUSummaryPlugin> OTUSummaryPluginProxy = PluginProxy<OTUSummaryPlugin>("OTUSummary", PluginManager::getInstance());
