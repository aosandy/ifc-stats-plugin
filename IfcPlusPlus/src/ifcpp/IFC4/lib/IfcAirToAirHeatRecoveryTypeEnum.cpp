/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcAirToAirHeatRecoveryTypeEnum.h"

// TYPE IfcAirToAirHeatRecoveryTypeEnum = ENUMERATION OF	(FIXEDPLATECOUNTERFLOWEXCHANGER	,FIXEDPLATECROSSFLOWEXCHANGER	,FIXEDPLATEPARALLELFLOWEXCHANGER	,ROTARYWHEEL	,RUNAROUNDCOILLOOP	,HEATPIPE	,TWINTOWERENTHALPYRECOVERYLOOPS	,THERMOSIPHONSEALEDTUBEHEATEXCHANGERS	,THERMOSIPHONCOILTYPEHEATEXCHANGERS	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcAirToAirHeatRecoveryTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAirToAirHeatRecoveryTypeEnum> copy_self( new IfcAirToAirHeatRecoveryTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcAirToAirHeatRecoveryTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCAIRTOAIRHEATRECOVERYTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_FIXEDPLATECOUNTERFLOWEXCHANGER:	stream << ".FIXEDPLATECOUNTERFLOWEXCHANGER."; break;
		case ENUM_FIXEDPLATECROSSFLOWEXCHANGER:	stream << ".FIXEDPLATECROSSFLOWEXCHANGER."; break;
		case ENUM_FIXEDPLATEPARALLELFLOWEXCHANGER:	stream << ".FIXEDPLATEPARALLELFLOWEXCHANGER."; break;
		case ENUM_ROTARYWHEEL:	stream << ".ROTARYWHEEL."; break;
		case ENUM_RUNAROUNDCOILLOOP:	stream << ".RUNAROUNDCOILLOOP."; break;
		case ENUM_HEATPIPE:	stream << ".HEATPIPE."; break;
		case ENUM_TWINTOWERENTHALPYRECOVERYLOOPS:	stream << ".TWINTOWERENTHALPYRECOVERYLOOPS."; break;
		case ENUM_THERMOSIPHONSEALEDTUBEHEATEXCHANGERS:	stream << ".THERMOSIPHONSEALEDTUBEHEATEXCHANGERS."; break;
		case ENUM_THERMOSIPHONCOILTYPEHEATEXCHANGERS:	stream << ".THERMOSIPHONCOILTYPEHEATEXCHANGERS."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcAirToAirHeatRecoveryTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_FIXEDPLATECOUNTERFLOWEXCHANGER:	return L"FIXEDPLATECOUNTERFLOWEXCHANGER";
		case ENUM_FIXEDPLATECROSSFLOWEXCHANGER:	return L"FIXEDPLATECROSSFLOWEXCHANGER";
		case ENUM_FIXEDPLATEPARALLELFLOWEXCHANGER:	return L"FIXEDPLATEPARALLELFLOWEXCHANGER";
		case ENUM_ROTARYWHEEL:	return L"ROTARYWHEEL";
		case ENUM_RUNAROUNDCOILLOOP:	return L"RUNAROUNDCOILLOOP";
		case ENUM_HEATPIPE:	return L"HEATPIPE";
		case ENUM_TWINTOWERENTHALPYRECOVERYLOOPS:	return L"TWINTOWERENTHALPYRECOVERYLOOPS";
		case ENUM_THERMOSIPHONSEALEDTUBEHEATEXCHANGERS:	return L"THERMOSIPHONSEALEDTUBEHEATEXCHANGERS";
		case ENUM_THERMOSIPHONCOILTYPEHEATEXCHANGERS:	return L"THERMOSIPHONCOILTYPEHEATEXCHANGERS";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcAirToAirHeatRecoveryTypeEnum> IfcAirToAirHeatRecoveryTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcAirToAirHeatRecoveryTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcAirToAirHeatRecoveryTypeEnum>(); }
	shared_ptr<IfcAirToAirHeatRecoveryTypeEnum> type_object( new IfcAirToAirHeatRecoveryTypeEnum() );
	if( std_iequal( arg, L".FIXEDPLATECOUNTERFLOWEXCHANGER." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_FIXEDPLATECOUNTERFLOWEXCHANGER;
	}
	else if( std_iequal( arg, L".FIXEDPLATECROSSFLOWEXCHANGER." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_FIXEDPLATECROSSFLOWEXCHANGER;
	}
	else if( std_iequal( arg, L".FIXEDPLATEPARALLELFLOWEXCHANGER." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_FIXEDPLATEPARALLELFLOWEXCHANGER;
	}
	else if( std_iequal( arg, L".ROTARYWHEEL." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_ROTARYWHEEL;
	}
	else if( std_iequal( arg, L".RUNAROUNDCOILLOOP." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_RUNAROUNDCOILLOOP;
	}
	else if( std_iequal( arg, L".HEATPIPE." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_HEATPIPE;
	}
	else if( std_iequal( arg, L".TWINTOWERENTHALPYRECOVERYLOOPS." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_TWINTOWERENTHALPYRECOVERYLOOPS;
	}
	else if( std_iequal( arg, L".THERMOSIPHONSEALEDTUBEHEATEXCHANGERS." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_THERMOSIPHONSEALEDTUBEHEATEXCHANGERS;
	}
	else if( std_iequal( arg, L".THERMOSIPHONCOILTYPEHEATEXCHANGERS." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_THERMOSIPHONCOILTYPEHEATEXCHANGERS;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcAirToAirHeatRecoveryTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
