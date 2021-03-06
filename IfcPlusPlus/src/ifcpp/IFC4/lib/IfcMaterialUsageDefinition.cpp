/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcMaterialUsageDefinition.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesMaterial.h"

// ENTITY IfcMaterialUsageDefinition 
IfcMaterialUsageDefinition::IfcMaterialUsageDefinition( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcMaterialUsageDefinition::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMaterialUsageDefinition> copy_self( new IfcMaterialUsageDefinition() );
	return copy_self;
}
void IfcMaterialUsageDefinition::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCMATERIALUSAGEDEFINITION" << "(";
	stream << ");";
}
void IfcMaterialUsageDefinition::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcMaterialUsageDefinition::toString() const { return L"IfcMaterialUsageDefinition"; }
void IfcMaterialUsageDefinition::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
}
void IfcMaterialUsageDefinition::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
}
void IfcMaterialUsageDefinition::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	if( !m_AssociatedTo_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> AssociatedTo_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_AssociatedTo_inverse.size(); ++i )
		{
			if( !m_AssociatedTo_inverse[i].expired() )
			{
				AssociatedTo_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssociatesMaterial>( m_AssociatedTo_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "AssociatedTo_inverse", AssociatedTo_inverse_vec_obj ) );
	}
}
void IfcMaterialUsageDefinition::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcMaterialUsageDefinition::unlinkFromInverseCounterparts()
{
}
