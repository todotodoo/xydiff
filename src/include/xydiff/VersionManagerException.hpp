#ifndef VERSIONMGREXCEPTION_HXX__
#define VERSIONMGREXCEPTION_HXX__

#include <string>
#include <stdio.h>

#ifdef VERBOSE
#define vddprintf(a) printf a
#else
#define vddprintf(a)
#endif

class VersionManagerException {
	public:
		VersionManagerException(const std::string &IncStatus,	const std::string &IncContext, const std::string &IncMessage);
		VersionManagerException(const std::string &IncContext, const std::string &IncMessage);
		std::string status ;
		std::string context ;
		std::string message ;
	} ;

#endif