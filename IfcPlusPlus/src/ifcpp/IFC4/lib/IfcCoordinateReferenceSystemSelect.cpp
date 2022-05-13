/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcCoordinateReferenceSystemSelect.h"

// TYPE IfcCoordinateReferenceSystemSelect = SELECT	(IfcCoordinateReferenceSystem	,IfcGeometricRepresentationContext);
shared_ptr<IfcCoordinateReferenceSystemSelect> IfcCoordinateReferenceSystemSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.empty() ){ return shared_ptr<IfcCoordinateReferenceSystemSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcCoordinateReferenceSystemSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcCoordinateReferenceSystemSelect>();
	}
	shared_ptr<IfcCoordinateReferenceSystemSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}