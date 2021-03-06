/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcIndexedPolygonalFace.h"
#include "ifcpp/IFC4/include/IfcPolygonalFaceSet.h"
#include "ifcpp/IFC4/include/IfcPositiveInteger.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcIndexedPolygonalFace 
IfcIndexedPolygonalFace::IfcIndexedPolygonalFace( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcIndexedPolygonalFace::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcIndexedPolygonalFace> copy_self( new IfcIndexedPolygonalFace() );
	for( size_t ii=0; ii<m_CoordIndex.size(); ++ii )
	{
		auto item_ii = m_CoordIndex[ii];
		if( item_ii )
		{
			copy_self->m_CoordIndex.emplace_back( dynamic_pointer_cast<IfcPositiveInteger>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcIndexedPolygonalFace::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCINDEXEDPOLYGONALFACE" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_CoordIndex.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcPositiveInteger>& type_object = m_CoordIndex[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, false );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ");";
}
void IfcIndexedPolygonalFace::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcIndexedPolygonalFace::toString() const { return L"IfcIndexedPolygonalFace"; }
void IfcIndexedPolygonalFace::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcIndexedPolygonalFace, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readTypeOfIntegerList( args[0], m_CoordIndex );
}
void IfcIndexedPolygonalFace::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcTessellatedItem::getAttributes( vec_attributes );
	if( !m_CoordIndex.empty() )
	{
		shared_ptr<AttributeObjectVector> CoordIndex_vec_object( new AttributeObjectVector() );
		std::copy( m_CoordIndex.begin(), m_CoordIndex.end(), std::back_inserter( CoordIndex_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "CoordIndex", CoordIndex_vec_object ) );
	}
}
void IfcIndexedPolygonalFace::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcTessellatedItem::getAttributesInverse( vec_attributes_inverse );
	if( !m_ToFaceSet_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ToFaceSet_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ToFaceSet_inverse.size(); ++i )
		{
			if( !m_ToFaceSet_inverse[i].expired() )
			{
				ToFaceSet_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcPolygonalFaceSet>( m_ToFaceSet_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ToFaceSet_inverse", ToFaceSet_inverse_vec_obj ) );
	}
}
void IfcIndexedPolygonalFace::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcTessellatedItem::setInverseCounterparts( ptr_self_entity );
}
void IfcIndexedPolygonalFace::unlinkFromInverseCounterparts()
{
	IfcTessellatedItem::unlinkFromInverseCounterparts();
}
