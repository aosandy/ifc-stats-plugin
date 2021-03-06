/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcPreDefinedProperties.h"

// ENTITY IfcPreDefinedProperties 
IfcPreDefinedProperties::IfcPreDefinedProperties( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPreDefinedProperties::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPreDefinedProperties> copy_self( new IfcPreDefinedProperties() );
	return copy_self;
}
void IfcPreDefinedProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPREDEFINEDPROPERTIES" << "(";
	stream << ");";
}
void IfcPreDefinedProperties::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPreDefinedProperties::toString() const { return L"IfcPreDefinedProperties"; }
void IfcPreDefinedProperties::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
}
void IfcPreDefinedProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPropertyAbstraction::getAttributes( vec_attributes );
}
void IfcPreDefinedProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPropertyAbstraction::getAttributesInverse( vec_attributes_inverse );
}
void IfcPreDefinedProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPropertyAbstraction::setInverseCounterparts( ptr_self_entity );
}
void IfcPreDefinedProperties::unlinkFromInverseCounterparts()
{
	IfcPropertyAbstraction::unlinkFromInverseCounterparts();
}
