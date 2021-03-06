/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcContext.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcRepresentationContext.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcUnitAssignment.h"

// ENTITY IfcContext 
IfcContext::IfcContext( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcContext::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcContext> copy_self( new IfcContext() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = make_shared<IfcGloballyUniqueId>( createBase64Uuid_wstr().data() ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_LongName ) { copy_self->m_LongName = dynamic_pointer_cast<IfcLabel>( m_LongName->getDeepCopy(options) ); }
	if( m_Phase ) { copy_self->m_Phase = dynamic_pointer_cast<IfcLabel>( m_Phase->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_RepresentationContexts.size(); ++ii )
	{
		auto item_ii = m_RepresentationContexts[ii];
		if( item_ii )
		{
			copy_self->m_RepresentationContexts.emplace_back( dynamic_pointer_cast<IfcRepresentationContext>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_UnitsInContext ) { copy_self->m_UnitsInContext = dynamic_pointer_cast<IfcUnitAssignment>( m_UnitsInContext->getDeepCopy(options) ); }
	return copy_self;
}
void IfcContext::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCONTEXT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LongName ) { m_LongName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Phase ) { m_Phase->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RepresentationContexts );
	stream << ",";
	if( m_UnitsInContext ) { stream << "#" << m_UnitsInContext->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcContext::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcContext::toString() const { return L"IfcContext"; }
void IfcContext::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcContext, expecting 9, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	m_LongName = IfcLabel::createObjectFromSTEP( args[5], map );
	m_Phase = IfcLabel::createObjectFromSTEP( args[6], map );
	readEntityReferenceList( args[7], m_RepresentationContexts, map );
	readEntityReference( args[8], m_UnitsInContext, map );
}
void IfcContext::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcObjectDefinition::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ObjectType", m_ObjectType ) );
	vec_attributes.emplace_back( std::make_pair( "LongName", m_LongName ) );
	vec_attributes.emplace_back( std::make_pair( "Phase", m_Phase ) );
	if( !m_RepresentationContexts.empty() )
	{
		shared_ptr<AttributeObjectVector> RepresentationContexts_vec_object( new AttributeObjectVector() );
		std::copy( m_RepresentationContexts.begin(), m_RepresentationContexts.end(), std::back_inserter( RepresentationContexts_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "RepresentationContexts", RepresentationContexts_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "UnitsInContext", m_UnitsInContext ) );
}
void IfcContext::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcObjectDefinition::getAttributesInverse( vec_attributes_inverse );
	if( !m_IsDefinedBy_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> IsDefinedBy_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_IsDefinedBy_inverse.size(); ++i )
		{
			if( !m_IsDefinedBy_inverse[i].expired() )
			{
				IsDefinedBy_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelDefinesByProperties>( m_IsDefinedBy_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "IsDefinedBy_inverse", IsDefinedBy_inverse_vec_obj ) );
	}
	if( !m_Declares_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> Declares_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_Declares_inverse.size(); ++i )
		{
			if( !m_Declares_inverse[i].expired() )
			{
				Declares_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelDeclares>( m_Declares_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "Declares_inverse", Declares_inverse_vec_obj ) );
	}
}
void IfcContext::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcObjectDefinition::setInverseCounterparts( ptr_self_entity );
}
void IfcContext::unlinkFromInverseCounterparts()
{
	IfcObjectDefinition::unlinkFromInverseCounterparts();
}
