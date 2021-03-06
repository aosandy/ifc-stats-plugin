/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcActorRole.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcRoleEnum.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcActorRole 
IfcActorRole::IfcActorRole( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcActorRole::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcActorRole> copy_self( new IfcActorRole() );
	if( m_Role ) { copy_self->m_Role = dynamic_pointer_cast<IfcRoleEnum>( m_Role->getDeepCopy(options) ); }
	if( m_UserDefinedRole ) { copy_self->m_UserDefinedRole = dynamic_pointer_cast<IfcLabel>( m_UserDefinedRole->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	return copy_self;
}
void IfcActorRole::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCACTORROLE" << "(";
	if( m_Role ) { m_Role->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedRole ) { m_UserDefinedRole->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcActorRole::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcActorRole::toString() const { return L"IfcActorRole"; }
void IfcActorRole::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcActorRole, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Role = IfcRoleEnum::createObjectFromSTEP( args[0], map );
	m_UserDefinedRole = IfcLabel::createObjectFromSTEP( args[1], map );
	m_Description = IfcText::createObjectFromSTEP( args[2], map );
}
void IfcActorRole::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Role", m_Role ) );
	vec_attributes.emplace_back( std::make_pair( "UserDefinedRole", m_UserDefinedRole ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
}
void IfcActorRole::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	if( !m_HasExternalReference_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> HasExternalReference_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasExternalReference_inverse.size(); ++i )
		{
			if( !m_HasExternalReference_inverse[i].expired() )
			{
				HasExternalReference_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcExternalReferenceRelationship>( m_HasExternalReference_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "HasExternalReference_inverse", HasExternalReference_inverse_vec_obj ) );
	}
}
void IfcActorRole::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcActorRole::unlinkFromInverseCounterparts()
{
}
