# OTUSummary
# Language: C++
# Input: BIOM
# Output: DIR
# Tested with: PluMA 1.0, GCC 4.8.4

Summarize OTUs in a collection of samples (Caporaso et al, 2010) by taking a BIOM
file and creating multiple BIOM and TXT files, one for each level of the phylogenetic tree.

The plugin therefore accepts just one BIOM File as input, and a directory as output
to hold the multiple files that it produces.  These files will automatically also
be copied to the parent folder.
