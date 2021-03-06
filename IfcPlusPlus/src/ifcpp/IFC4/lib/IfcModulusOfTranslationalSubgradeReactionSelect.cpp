/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcModulusOfLinearSubgradeReactionMeasure.h"
#include "ifcpp/IFC4/include/IfcModulusOfTranslationalSubgradeReactionSelect.h"

// TYPE IfcModulusOfTranslationalSubgradeReactionSelect = SELECT	(IfcBoolean	,IfcModulusOfLinearSubgradeReactionMeasure);
shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect> IfcModulusOfTranslationalSubgradeReactionSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.empty() ){ return shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>();
	}
	shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
